cin = input().split()
com_name = cin[0]
n_names = int(cin[1])
names = cin[2:]
#print(names)

def ident(names):
    princess = 0
    baron = 0
    priest = 0
    commoner = 0
    for i in range(n_names):
        name = names[i]
        back_pos = len(name)-len(com_name)
        if name.find(com_name)==0:
            princess+=1
        elif name.find(com_name)==back_pos:
            baron+=1
        elif name.find(com_name)>0 and name.find(com_name)<back_pos:
            priest+=1
        elif name.find(com_name)<0:
            commoner+=1
    return [princess,baron,priest,commoner]
result = ident(names)

print(result[0],"princess".upper())
print(result[1],"baron".upper())
print(result[2],"priest".upper())
print(result[3],"commoner".upper())
