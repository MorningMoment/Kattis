import sys
#
# f = open("in.txt")
# cnt = f.read().split()
# f.close()

cnt = sys.stdin.read().split()
n = int(cnt.pop(0))

seq = []
def h(n):
    if n==1:
        seq.append(n)
    elif n%2==0:
        seq.append(n)
        h(int(n/2))
    elif n%2==1:
        seq.append(n)
        h(3*n+1)
h(n)
print(sum(seq))