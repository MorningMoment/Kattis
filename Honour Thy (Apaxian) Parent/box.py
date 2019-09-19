import sys
#
f = open("in.txt")
cnt = f.read().split()
f.close()

#cnt = sys.stdin.read().split()

for var in "nX":
    globals()[var] = int(cnt.pop(0))
boxes = []
for i in range(n):
    x = float(cnt.pop(0))
    y = float(cnt.pop(0))
    z = float(cnt.pop(0))
    boxes.append(x*y*z)

max_v = max(boxes)
print(int(max_v - X))