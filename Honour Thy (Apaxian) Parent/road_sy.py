N,R,H,M,S = [int(elem) for elem in raw_input().split()]

cityName = list()
data_c = list()
for i in range(N):
        line = raw_input().split()
        data_c.append((int(line[0]), int(line[2])))
        cityName.append(line[1])
dict_c = dict(data_c)


data_r = list()
for r in range(R):
        line = [int(elem) for elem in raw_input().split()]
        data_r.append(((line[0],line[1]),line[2]))
        data_r.append(((line[1],line[0]),line[2]))
        # roads are commutative
dict_r = dict(data_r)

history = [(x,-H) for x in range(N)]
history = dict(history)

T = 0


# ('dict_c:', {0: 10, 1: 10, 2: 20, 3: 15, 4: 10})
# ('dict_r', {(0, 1): 5, (1, 2): 10, (3, 2): 5, (1, 3): 15, (3, 4): 5, (3, 1): 15, (2, 1): 10, (2, 3): 5, (1, 4): 15, (4, 3): 5, (0, 4): 20, (1, 0): 5, (4, 1): 15, (4, 0): 20})
# ('history', {0: -50, 1: -50, 2: -50, 3: -50, 4: -50})


def TripNext(S1):
        global T
        T += dict_c[S1]
        history[S1] = T
        cityTuple = [(S1,x) for x in range(N)]
        availcity_time = list()
        for elem in cityTuple:
                if elem in dict_r:
                        availcity_time.append((elem[1],dict_r[elem]))
        availcity_time = dict(availcity_time)
        availcity = availcity_time.keys()
        print cityName[S1]
        #print availcity,T,"****"
        for city in availcity:
                if T + availcity_time[city] - history[city] < H:
                        del availcity_time[city]
                elif T + availcity_time[city] + dict_c[city] > M:
                        del availcity_time[city]
        print availcity_time.keys()
        if len(availcity_time) == 0:
                print T
                return 0
        for city in availcity_time.keys():
                if availcity_time[city] == min(availcity_time.values()):
                        T += availcity_time[city]
                        return TripNext(city)

TripNext(S)
#print T

a = [1,2,3]
def func(a):
        #global a
        a[0] = 999
func(a)

demo1.append(999)