n = int(input())
v = []

for i in range (n):
    v.append(int(input()))

for cont in range (n):
    if v[cont] == 0:
        print ("NULL")

    if v[cont] % 2 == 0:
        if v[cont] > 0:
            print ("EVEN POSITIVE")
        if v[cont] < 0:
            print ("EVEN NEGATIVE")

    if v[cont] % 2 != 0:
        if v[cont] > 0:
            print ("ODD POSITIVE")
        if v[cont] < 0:
            print ("ODD NEGATIVE")
