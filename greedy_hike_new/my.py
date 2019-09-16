import sys
f = open('input.txt')
cnt = f.read().split()
f.close()

for var in ["Nn","Ne"]:
    globals()[var] = int(cnt.pop(0))

edges =[]
for i in range(Ne):
    a = int(cnt.pop(0))
    b = int(cnt.pop(0))
    edges.append([a,b])
    