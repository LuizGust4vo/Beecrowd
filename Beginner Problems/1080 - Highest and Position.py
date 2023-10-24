maior = 0
pos = 0

for cont in range(1, 100 + 1):
    n = int(input())
    if cont == 1:
        maior = n
        pos = cont

    if n > maior:
        maior = n
        pos = cont

print(maior)
print(pos)
