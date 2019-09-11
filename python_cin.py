import sys

# for local IDE
f = open('./input.txt')
# get a list of all inputs, seperated by newline or space
cont = f.read().split()
f.close

# for kattis 
cont = sys.stdin.read().split()

for i in range(k):
	a = cont.pop(0) 
	## operarions....

for var in ['L','N','k','Q']:
	globals()[var] = int(cont.pop(0))