from collections import Counter
def gameOfLifeInfinite(live):
    ctr = Counter((I, J)
                  for i, j in live
                  for I in range(i-1, i+2)
                  for J in range(j-1, j+2)
                  if I != i or J != j)
    print(ctr)
    print("********")
    #return points with 3 or 2 lives around them
    return {ij
            for ij in ctr
            if ctr[ij] == 3 or ctr[ij] == 2 and ij in live}

live = [(0,1),(1,2),(2,2),(3,1),(3,2)]
demo = gameOfLifeInfinite(live)
print(demo)


demo = [(0,0),(0,0),(0,1),(0,2),(1,1),(-1,4),(-1,0),(1,1)]
ctr = Counter(demo)

func = lambda x:x[0][0]>=0 and x[0][0]<rows and x[0][1]>=0 and x[0][1]<cols
rows = 4
cols = 4
valid = dict(filter(func,ctr.items()))

ctr.items()

a = [[1,2,3],[4,5,6]]
b = list(list(zip(*a)))