import sys

f = open('input.txt')
cnt = f.read().split()
f.close()

for var in ["Nn", "Ne"]:
    globals()[var] = int(cnt.pop(0))

edges = []
for i in range(Ne):
    a = int(cnt.pop(0))
    b = int(cnt.pop(0))
    edges.append([a, b])

def another(i,edge):
    if(i==edge[0]):
        return edge[1]
    elif(i==edge[1]):
        return edge[0]

unvisited = list(range(Nn))

def dfs(edges,i):
    for edge in edges:
        if i in edge:
            another_v = another(i,edge)
            if another_v in unvisited:
                unvisited.remove(another_v)
                dfs(edges,another_v)

cnt = 0
while len(unvisited)>0:
    current_node = unvisited.pop(0)
    dfs(edges, current_node)
    cnt+=1
print(cnt)