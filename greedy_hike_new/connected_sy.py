num_of_vertices = input()
num_of_edges = input()
visited_vertex = list()
linked_nodes = list()
for i in range(num_of_edges):
 x,y = [int(elem) for elem in raw_input().split()]
 linked_nodes.append((x,y))

#print linked_nodes

def dfs(vertex_tmp):
 global visited_vertex
 if vertex_tmp not in visited_vertex:
  visited_vertex.append(vertex_tmp)
 for node in range(num_of_vertices):
  if (vertex_tmp,node) in linked_nodes or (node,vertex_tmp) in linked_nodes:
   if node not in visited_vertex:
    visited_vertex.append(node)
    dfs(node)

connected_count = 0
remaining_set = set(range(num_of_vertices))
while len(remaining_set)>0:
 dfs(remaining_set.pop())
 remaining_set = remaining_set - set(visited_vertex)
 connected_count += 1
 #visited_vertex = list()

print connected_count