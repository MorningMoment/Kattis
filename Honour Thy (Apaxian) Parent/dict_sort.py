a = {"A":1,"B":2,"C":-1,"D":-3}
demo = a.items()

demo1 = sorted(demo,key=lambda x:x[1],reverse = False)

demo = {}
a = [("A",1),("B",2),("C",-2)]
demo = dict(a)

from collections import defaultdict
from collections import Counter
a = defaultdict(int)
demo = "abcaabcabcabcaa"
for i in range(len(demo)):
    piece = demo[i:i+3]
    a[piece]+=1

countt = Counter(demo)
print(countt.items())
