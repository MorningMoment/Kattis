# 1. 获取全部活细胞的坐标（设有n个）
# 2。列觉所有细胞周围8个点的坐标（8*n）并用Counter记录每个坐标出现的次数
# 3。本期活，下期继续活的坐标：次数=2 or 次数=3 且出现在全部活细胞列表中的坐标
# 4。用filter，筛选出在边界内的Counter items
# 5。本期死，下期活的坐标：次数=3 且不出现在全部活细胞列表中的坐标
# 6。画出下一期的01矩阵：只需要画出【本期活，下期继续活】和【复活】的坐标，其余留为0

rows = 4
cols = 4

mapp = [[0,0,1,0],
        [0,0,1,1],
        [1,1,0,0],
        [1,1,0,0]]

# next_gen = [[0, 0, 1, 1],
#             [0, 0, 1, 1],
#             [1, 0, 0, 0],
#             [1, 1, 0, 0]]

from collections import Counter
lives = []
for i in range(rows):
    for j in range(cols):
        if mapp[i][j]==1:
            lives.append((i,j))

cnt = Counter([(I,J) for i,j in lives
                    for I in range(i-1,i+2)
                    for J in range(j-1,j+2)
                     if I!=i or J!=j])

cont_to_live = [ij for ij in cnt.keys() if cnt[ij] in [2,3] and ij in lives]
func = lambda x:x[0][0]>=0 and x[0][0]<rows and x[0][1]>=0 and x[0][1]<cols
accepted = dict(filter(func,cnt.items()))
death_to_live = [ij for ij in accepted.keys() if accepted[ij]==3 and ij not in lives]
all_lives = cont_to_live+death_to_live

next_gen = [[0 for i in range(cols)] for j in range(rows)]
for i,j in all_lives:
    next_gen[i][j] = 1

