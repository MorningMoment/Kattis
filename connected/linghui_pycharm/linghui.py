import sys

def dfs(pair_list, root_vertex):
    visited.add(root_vertex)

    for i in pair_list:
        if root_vertex in i:
            pair_list.remove(i)
            #删掉这条边
            for j in i:
                if j != root_vertex:
                    visited.add(j)
                    dfs(pair_list, j)
    #返回这个点相关的所有点
    return visited

def main():
    f = open('in.txt')
    contents = f.readlines()
    f.close()
    #contents = sys.stdin.readlines()
    v_num, e_num = int(contents[0]), int(contents[1])

    pair_list = []
    for i in contents[2:]:
        pair_list.append([int(i.split(' ')[0]), int(i.split(' ')[1].rstrip('\n'))])

    global visited
    visited = set()
    unvisited_pair_list = []
    root_vertex = pair_list[0][0]
    #初始点
    components_list = []
    components_list.append(dfs(pair_list, root_vertex))

    # for i in pair_list:
    #     if (i[0] not in dfs(pair_list, root_vertex)) or (i[1] not in dfs(pair_list, root_vertex)):
    #         unvisited_pair_list.append(i)
    #         visited = set()
    #         graphy_i = dfs(unvisited_pair_list, unvisited_pair_list[0][0])
    #         print(graphy_i)
    #         components_list.append(graphy_i)


    while(len(pair_list)!=0):
        visited = set()
        graphy_i = dfs(pair_list,pair_list[0][0])
        print(graphy_i)
        components_list.append(graphy_i)

    print(components_list)
    print(len(components_list))

if __name__ == '__main__':
    main()