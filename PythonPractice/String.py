print("{0:%}".format(0.35))
#35.000000%
print("{0:.0%}".format(0.35))
#35%
print("{0:.2%}".format(0.35))
#35.00%
print("{0:.2%} and {1:.2%}".format(0.35,0.45))
#35.00% and 45.00% 注意括号的个数和位置

import os
os.chdir('/Users/zhou/Travail/Code/Kattis')
fname = list(filter(lambda x:"excutable" in x,os.listdir()))[0]
f = open(fname)
cnt = f.read().split("\n")

ncnt = []
for i in cnt:
    os.remove(i.replace("./","/Users/zhou/Travail/Code/Kattis/"))
print(ncnt)

a = "hello"
m = a.replace("h","a")
m


