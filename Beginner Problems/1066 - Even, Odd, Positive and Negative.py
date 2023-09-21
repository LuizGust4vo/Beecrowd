par = 0
impar = 0
pos = 0
neg = 0

for cont in range(5):
    v = int(input())
    if v % 2 == 0:
        par+=1
    if v % 2 != 0:
        impar+=1
    if v < 0:
        neg+=1
    if v > 0:
        pos+=1

print(f"{par} valor(es) par(es)")
print(f"{impar} valor(es) impar(es)")
print(f"{pos} valor(es) positivo(s)")
print(f"{neg} valor(es) negativo(s)")
