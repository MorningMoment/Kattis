import sys
from collections import defaultdict

f = open('input.txt')
cnt = f.read().split()
f.close()

#cnt = sys.stdin.read().split()

for i, var in enumerate("LNkQ"):
    globals()[var] = int(cnt[i])

lines = "".join(cnt[4:L+4])

Book = defaultdict(int)
for i in range(N):
    piece = lines[i:i+k]
    Book[piece] +=1



for i in range(Q):
    key = cnt[L+4+i]
    # try:
    print(key,Book[key])
    # except:
    #     print(key,0)

