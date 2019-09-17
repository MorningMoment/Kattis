# Any live cell with fewer than two live neighbors dies, as if caused by under-population.
# Any live cell with two or three live neighbors lives on to the next generation.
# Any live cell with more than three live neighbors dies, as if by over-population..
# Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

# Output:
# [
#   [0,0,0],
#   [1,0,1],
#   [0,1,1],
#   [0,1,0]
# ]

a = [
  [0,1,0],
  [0,0,1],
  [1,1,1],
  [0,0,0]
]

def search_around(lst,x,y):
    cnt =0
    for i in [x-1,x,x+1]:
        for j in [y-1,y,y+1]:
            if(i>=0 and j>=0 and (i,j)!=(x,y)):
                try:
                    print("({0},{1}) is {2}".format(i,j,lst[i][j]))
                    if(lst[i][j]==1):
                        cnt+=1
                except:
                    continue
    print(cnt)
    return cnt



x = len(a)
y = len(a[0])
newlst = [[0 for i in range(y)] for j in range(x)] 
print(newlst)

        
def live_die(lst,newlst):
    for x in range(len(lst)):
        for y in range(len(lst[0])):
            status = lst[x][y]
            if status == 0:
                if search_around(lst, x, y) == 3:
                    newlst[x][y] = 1
            elif status == 1:
                if (search_around(lst, x, y) < 2 or search_around(lst, x, y) > 3):
                    newlst[x][y] = 0
                else:
                    newlst[x][y] = 1
    print(newlst)
    return newlst

live_die(a,newlst)