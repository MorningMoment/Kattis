import sys
#
# f = open("in.txt")
# cnt = f.read().split()
# f.close()

cnt = sys.stdin.read().split()

for var in "XYN":
    globals()[var] = int(cnt.pop(0))


B = []
R = []
for i in range(X):
    for j in range(Y):
        char = cnt.pop(0)
        if(char=="B"):
            B.append((i,j))
        elif(char=="R"):
            R.append((i,j))

def check_winner(Color,x,y):
    #作为左上：
    lst1 = list(zip(range(x,x+N),range(y,y+N)))
    # 右上
    lst2 = list(zip(range(x,x+N),range(y,y-N,-1)))
    #左
    lst3 = list(zip([x]*N,range(y,y+N)))
    #上
    lst4 = list(zip(range(x,x+N),[y]*N))
    #print(lst1,lst2,lst3,lst4,sep="\n")
    for lst in [lst1,lst2,lst3,lst4]:
        if set(lst).issubset(set(Color)):
            return True
    return False

# flag = False
# for color in [B,R]:
#     for x,y in color:
#         flag = check_winner(color,x,y)
#         if flag:
#             if color==B:
#                 print("BLUE WINS")
#             elif color==R:
#                 print("RED WINS")
#             break
#
#
# if flag==False:
#     print("NONE")

def main():
    flag = False
    for color in [B, R]:
        for x, y in color:
            flag = check_winner(color, x, y)
            if flag:
                if color == B:
                    print("BLUE WINS")
                    return 0
                elif color == R:
                    print("RED WINS")
                    return 0
    print("NONE")

main()