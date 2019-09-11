#异或运算
#a^a = 0
#a^0 = a
# a^b^c = (a^b)^c

# print(3^3)
# print(3^8)
# print(0^3)


#题目：1～1000，1000个数字，组成一个数组。每个数字都至少出现一次，
# 有一个数字出现了偶数次，其余的数字都出现了奇数次。找到这个数字。

import sys
from functools import reduce

f = open("input.txt")
cont = f.read().split()
f.close()
cont = [int(i) for i in cont]

#相同的数字，遇到就消掉

#step1：让该数组的数字自己逐个异或，消掉出现了偶数次的数字

a = reduce(lambda x,y:x^y,cont)

#step2: 让这个数字和1～1000的每个数字逐个异或，则出现奇数次的数字都会消掉，
#只剩下出现偶数次的数字

b = reduce(lambda x,y:x^y,range(1,1001),a)
print(b)

#如果要找的数字是唯一一个出现奇数次的数字，其余的数字都出现了偶数次，则该数组自身逐个
#异或即可

