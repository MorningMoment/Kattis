#找一串数中最长的递增子序列

from random import choice
from collections import deque
lst = deque([choice(range(100)) for i in range(20)])
lst_ori = lst.copy()
lst.rotate(-1)
lst.pop()
lst_ori.pop()
diff = [lst[i]-lst_ori[i]>0 for i in range(len(lst))]
upper = sum(diff)
diff1 = [lst[i]-lst_ori[i]<0 for i in range(len(lst))]
down = sum(diff1)

i = 0
while i<len(diff):
    flag = i
    result = 1
    if result==1:
        flag +=1
        result*=diff[flag]
    else:
        i=flag+1

class point:
    def __init__(self,xv,vy):
        self.x = xv
        self.y = vy
    def show(self):
        print(self.x,self.y)
    def addition(self):
        self.x+=1
        self.y+=1
        self.show()