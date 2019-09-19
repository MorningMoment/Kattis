import sys

f = open("in.txt")
cnt = f.read().splitlines()
f.close()

#cnt = sys.stdin.read().splitlines()
city_dict = {}
vars = cnt.pop(0).split()
for var in "NRHMS":
    globals()[var] = int(vars.pop(0))
for i in range(N):
    city_info=cnt.pop(0).split()
    city_dict[int(city_info[0])]=(city_info[1],int(city_info[2]))

#城市编号，城市名称，逛城市需要的时间

mapp = [[2**33 for i in range(N)] for j in range(N)]
for i in range(R):
    road = cnt.pop(0).split()
    c_from = int(road[0])
    c_to = int(road[1])
    r_time = int(road[2])
    mapp[c_from][c_to] = r_time
    mapp[c_to][c_from] = r_time

#上次访问的时间
v = [-H for i in range(N)]

T = 0

def main(S,M,mapp):
    v = [-H for i in range(N)]
    visited = [S]
    T = 0
    T += city_dict[S][1]
    while(T<=M):
        v[S] = T
        arriving_time = list(map(lambda x:x+T,mapp[S]))
        if min(arriving_time)>M:
            break
        accepted_cities = []
        for city in range(N):
            # if v[city] == -1:
            #     if arriving_time[city]+city_dict[city][1]<=M:
            #         accepted_cities.append(city)
            # else:
            if arriving_time[city]-v[city]>=H:
                if arriving_time[city]+city_dict[city][1]<=M:
                    accepted_cities.append(city)
        dists = [mapp[S][acc_city] for acc_city in accepted_cities]
        print(city_dict[S][0], accepted_cities)
        if len(dists) ==0 :
            break
        travel_time = min(dists)
        S = accepted_cities[dists.index(travel_time)]
        T = arriving_time[S]
        T += city_dict[S][1]
        visited.append(S)
    return visited,T

visited,T = main(S,M,mapp)

visited = [city_dict[i][0] for i in visited]
for city in visited:
    print(city,end = "\t")
print()
print(T)

