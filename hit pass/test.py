import sys
# import os
# os.chdir('/home/zhouxing/Documents/Kattis/hit pass')
cnt = sys.stdin.read().split()


# f = open("./input.txt")
# cnt = f.read().split()
# f.close()

for var in "NMSR":
	globals()[var] = int(cnt.pop(0))

map = []
for i in range(S):
	ship = []
	ship.append(int(cnt.pop(0)))
	ship.append(int(cnt.pop(0)))
	map.append(ship)

# shots = []
# for i in range(R):
# 	shot = []
# 	shot.append(int(cnt.pop(0)))
# 	shot.append(int(cnt.pop(0)))
# 	shots.append(shot)

#print(map)

def find_closest(map,x,y):
	ko = False
	mindist = 2001
	xflag = x
	yflag = y
	for i in range(len(map)):
		dis = abs(x-map[i][0]) + abs(y-map[i][1])
		if dis<mindist:
			mindist = dis
			xflag = map[i][0]
			yflag = map[i][1]
			if dis==0:
				ko = True
				map.pop(i)
				break
	return max(0,1000-mindist*100)
distt = 0

for i in range(R):
	x = int(cnt.pop(0))
	y = int(cnt.pop(0))
	distt += find_closest(map,x,y)

sunk = S - len(map)
print(str(sunk)+"/"+str(S),"ships sunk. Score:",str(distt),"points")

