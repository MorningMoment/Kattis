a = {1:[0],
     2:[0],
     3:[1],
     4:[1,2],
     5:[3,4],
     6:[2,5],
     7:[1,5,6]}

course = set()
def upstream(a,node):
    if(a[node] == [0]):
        course.add(node)
    else:
        for i in a[node]:
            course.add(i)
            upstream(a,i)

upstream(a,4)
print(course)

required = [6,7]
planned = [1,2]
needed = set()
for c in required+planned:
    if c in needed:
        continue
    #print(c)
    course = set()
    upstream(a,c)
    #print(course)
    needed = needed.union(course)
print(needed)
needed.union(set(required))-set(planned)