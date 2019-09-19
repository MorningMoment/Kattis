import sys
f = open("in.txt")
cnt = f.read().split()
f.close()

#cnt = sys.stdin.read().split()

cnt = list(map(int,cnt))
x = cnt.pop(0)
y = cnt.pop(0)

mapp = [[cnt[i*y+j] for j in range(y)] for i in range(x)]

def search_around(mapp,i,j,x,y):
    cnt = 0
    for p in [i-1,i,i+1]:
        for q in [j-1,j,j+1]:
            if(p==-1 or q==-1 or p==x or q==y):
                continue
            else:
                if p!=x and q!=y:
                    if mapp[p][q] in [0,1]:
                    cnt+=mapp[p][q]
    return cnt

#search_around(mapp,1,2,x,y)

#live to death:-1
#death to live:2

def renewmapp(mapp,x,y):
    for p in range(x):
        for q in range(y):
            num = search_around(mapp,p,q,x,y)
            if(mapp[p][q]==0):
                if num == 3:
                    mapp[p][q]=2
            elif(mapp[p][q]==1):
                if num==2 or num==3:
                    mapp[p][q]=1
                else:
                    mapp[p][q]=-1
    return mapp

newapp = renewmapp(mapp,x,y)



def func(x):
    if(x==2):
        return 1
    if(x==-1):
        return 0
    return x

for i in range(x):
    newapp[i] = list(map(func,newapp[i]))


for i in range(x):
    for j in range(y):
        if(j!=y-1):
            print(newapp[i][j],end = "\t")
        else:
            print(newapp[i][j])

neighbors = [(1,0), (1,-1), (0,-1), (-1,-1), (-1,0), (-1,1), (0,1), (1,1)]
newneib = neighbors[:]
newneib[0] = (999,999)
neighbors