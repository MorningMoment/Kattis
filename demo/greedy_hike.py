import sys

f = open("./input.txt")
cnt = f.read().split()
f.close()

#cnt = sys.stdin.read().split()
for var in 'NMxy':
    globals()[var] = int(cnt.pop())
