import sys
#import os
# os.chdir('/home/zhouxing/Documents/Kattis/hit pass')
#os.chdir('/Users/zhou/Travail/Code/Kattis/hit pass')
cnt = sys.stdin.read().split()


# f = open("./input.txt")
# cnt = f.read().split()
# f.close()

for var in "NMSR":
    globals()[var] = int(cnt.pop(0))

mapp = []
for i in range(S):
    ship = []
    ship.append(int(cnt.pop(0)))
    ship.append(int(cnt.pop(0)))
    mapp.append(ship)

# shots = []
# for i in range(R):
#   shot = []
#   shot.append(int(cnt.pop(0)))
#   shot.append(int(cnt.pop(0)))
#   shots.append(shot)

#print(map)

# def find_closest(mapp,x,y):
#     mindist = 2001
#     for i in range(len(mapp)):
#         dis = abs(x-mapp[i][0]) + abs(y-mapp[i][1])
#         if dis<mindist:
#             mindist = dis
#             if dis==0:
#                 mapp.pop(i)
#                 break
#     return max(0,1000-mindist*100)
distt = 0

def find_closest(x,y,mapp):
    #func = lambda x,i,y:abs(x-i[0])+abs(y-i[1])
    def func(i):
        dist = abs(x-i[0])+abs(y-i[1])
        if(dist==0):
            mapp.remove(i)
        return dist
    mindist = min(list(map(func,mapp)))
    return max(0,1000-mindist*100)


for i in range(R):
    x = int(cnt.pop(0))
    y = int(cnt.pop(0))
    distt += find_closest(x,y,mapp)

sunk = S - len(mapp)
print(str(sunk)+"/"+str(S),"ships sunk. Score:",str(distt),"points")