#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 20:25:18 2019

@author: zhou
"""
import sys

f = open('input.txt')
contents = f.readlines()
f.close()
#contents = sys.stdin.readlines()

# to obtain the number of rows(x) and the number of columns(y)
N,M = int(contents[0].split(' ')[0]), int(contents[0].split(' ')[1].rstrip('\n'))
minef = []

# to obtain the mine field
for i in contents[1:]:
    row = []
    # print(i.split(' '))
    for j in i.split(' '):
        row.append(int(j.rstrip('\n')))
    minef.append(row)

#############3


# =============================================================================
# inp = input().split()
# N = int(inp[0])
# M = int(inp[1])
# rest = [int(i) for i in inp[2:]]
# minef = []
# for i in range(N):
#     row = []
#     for j in range(M):
#         row.append(rest.pop(0))
#     minef.append(row)
# =============================================================================
    

def fill_around(mat,i,j,num):
        for x in [i-1,i,i+1]:
            for y in [j-1,j,j+1]:
                if(x>=0 and y>=0):
                    try:
                        if(x!=i or y!=j):
                            mat[x][y]+=num
                        else:
                            mat[x][y]= 9999
                    except:
                        continue
        return mat



def show(mat,N,M):
    for i in range(N):
        for j in range(M):
            if(mat[i][j]>0 and mat[i][j]<9999):
                print(int(mat[i][j]),end = "")
            elif(mat[i][j]>=9999):
                print("X", end = "")
            elif(mat[i][j]==0):
                print("-",end = "")
        if(i<N-1):
            print(" ")
            

a = []
for i in range(N):
    row = []
    for j in range(M):
        row.append(0)
    a.append(row)
    

for i in range(N):
    for j in range(M):
        if(minef[i][j]>0):
            a = fill_around(a,i,j,minef[i][j])
show(a,N,M)



