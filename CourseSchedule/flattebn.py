def deepen(a,flat):
    for i in a:
        if isinstance(i,list)==False:
            flat.append(i)
        else:
            deepen(i,flat)
    return flat
flat = []
a = [1,2,3,[4,[5,6],[7,8]]]
demo = deepen(a,flat)
print(demo)

def deep(a):
    flat=[]
    if isinstance(a,list):
        for i in a:
             flat.extend(deep(i))
    else:
        flat.append(a)
    return flat

print(deep(a))

demo = [1,1,1,2,4,3,2,5]
from collections import Counter
a = Counter(demo)
print(dict(a))


from collections import defaultdict
help(defaultdict)

