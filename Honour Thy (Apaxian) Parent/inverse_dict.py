Book = {
    1:[],
    2:[],
    3:[1],
    4:[2,3],
    5:[2,4],
    6:[1,3],
    7:[2,5,6]
}

from collections import  defaultdict
a = defaultdict(set)
for lst in Book.values():
    for i in lst:
        for j in Book.keys():
            if i in Book[j]:
                a[i].add(j)
# topological sorting
#Indegree_info = dict((i,len(Book[i])) for i in Book.keys())
#Indegree : {1: {3, 6}, 2: {4, 5, 7}, 3: {4, 6}, 4: {5}, 5: {7}, 6: {7}})

result = []
def sortt(Book):
    global result
    keys = list(Book.keys())
    for i in keys:
        if len(Book[i]) ==0 :
            result.append(i)
            for son in a[i]:
                Book[son].remove(i)
            del Book[i]
    return Book

while len(Book)>0:
    Book = sortt(Book)
print(result)

# find all fathers:
dads = []
def find_dad(node):
    if Book[node]==[]:
        dads.append(node)
    else:
        for dad in Book[node]:
            dads.append(dad)
            find_dad(node)

find_dad(5)