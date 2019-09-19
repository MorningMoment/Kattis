Book = {
    1:[],
    2:[],
    3:[1],
    4:[2,3],
    5:[2,4],
    6:[1,3,8],
    7:[2,5,6],
    8:[]
}


dads = set()
def find_dad(node):
    if Book[node] == []:
        dads.add(node)
    else:
        for dad in Book[node]:
            dads.add(dad)
            find_dad(dad)
find_dad(5)


dads = []
def find_dad(node):
    if Book[node]==[]:
        dads.append(node)
    else:
        for dad in Book[node]:
            dads.append(dad)
            find_dad(dad)

find_dad(5)

def find_him(node):
    dads = set()
    def find_dad(son):
        if Book[son]==[]:
            dads.add(son)
        else:
            for dad in Book[son]:
                dads.add(dad)
                find_dad(dad)
    find_dad(node)
    try:
        dads.remove(node)
    except:
        pass
    return list(dads)

demo = find_him(1)