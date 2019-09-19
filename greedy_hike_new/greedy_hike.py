import sys

# f = open("./input.txt")
# cnt = f.read().split()
# f.close()

# PREPARE THE VARS
cnt = sys.stdin.read().split()
for var in 'NMxy':
    globals()[var] = int(cnt.pop(0))

# PREPARE THE MAP N*M
mapp = []
for i in range(N):
    row = []
    for j in range(M):
        row.append(int(cnt.pop(0)))
    mapp.append(row)

# FIND NEAREST POINT AROUND (x,y) AND ACCUMULATE THE DISTANCE
def around(mapp,x,y,cnt):
    mindis = 9999
    xflag = 0
    ori = mapp[x][y]
    for i in [x-1,x+1,x]:
        # EASY WITH THE OUT OF RANGE ISSUE
        if(i<0 or i>N-1):
            continue
        else:
            dis = abs(mapp[i][y+1] - ori)
            if(mindis>=dis):
                xflag = i
                mindis = dis
    cnt+=mindis
    x = xflag
    y += 1
    return cnt,x,y

i = y
cnt = 0
while(i<M-1):
    cnt,x,y = around(mapp,x,y,cnt)
    i+=1
print(x,y,cnt)


