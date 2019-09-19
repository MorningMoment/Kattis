import re
import sys

f = open("in.txt")
cnt = f.read().split()[0]
f.close()

#cnt = sys.stdin.read().split()[0]

res = ["!"]
cnt = list(cnt)
for i in range(len(cnt)):
    char = cnt.pop(0)
    if char!=res[-1]:
        res.append(char)

res.pop(0)
res = ''.join(res)