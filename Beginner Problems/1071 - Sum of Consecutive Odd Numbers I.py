x = int(input())
y = int(input())
somaI = 0

if x < y:
    for i in range(x + 1, y):
        if i % 2 != 0:
            somaI = somaI + i
    print(somaI)

if x > y:
    for i in range(y + 1, x):
        if i % 2 != 0:
            somaI = somaI + i
    print(somaI)

if x == y:
    print(somaI)