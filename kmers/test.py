import sys

import os
import re
f = open('./kmers/input.txt')
cont = f.read()
f.close()
print(cont)

lst = cont.split()
lst

# >>> a='Beautiful, is; better*than\nugly'
# >>> import re
# >>> re.split('; |, |\*|\n',a)
# ['Beautiful', 'is', 'better', 'than', 'ugly']


cont = re.split(' ',f.readlines())


#cont = [i.strip('\n') for i in f.readlines()]
f.close()

#cont = [i.strip('\n') for i in sys.stdin.readlines()]

nums = cont.pop(0).split(" ")

L,N,k,Q = int(nums[0]),int(nums[1]),int(nums[2]),int(nums[3])
oristr=''
Dict=dict()
keys = []
for i in range(L):
    oristr+=cont.pop(0)
for j in range(Q):
    keys.append(cont.pop(0))
    Dict[keys[-1]] = 0

for i in range(len(oristr)):
    try:
        frac = oristr[i:i+k]
        Dict[frac]+=1
        # if(frac in Dict.keys()):
        #     Dict[frac]+=1
    except:
        continue
#print(Dict)

for key in keys:
    print(key,Dict[key])

