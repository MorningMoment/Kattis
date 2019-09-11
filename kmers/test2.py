import sys
from functools import reduce

f = open('./kmers/input.txt')
cont = f.read().split()
f.close()

#cont =  sys.stdin.read().split()

for v in ['L','N','k','Q']:
    globals()[v] = int(cont.pop(0))

a = reduce(lambda x,y:x+y,cont[:L])
Dict = {}
keys = []

while(len(cont)>L):
    key = cont.pop(L)
    keys.append(key)
    Dict[key] = 0

for i in range(N-k+1):
    try:
        Dict[a[i:i+k]]+=1
    except:
        continue

for k in keys:
    print(k,Dict[k],end="\n")