n = int(input())

for cont in range(2, n + 1):
    if cont % 2 == 0:
        print(f"{cont}^2 =", cont * cont)
