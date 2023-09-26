n = int(input())
v = []
dentro = 0
fora = 0

for i in range(n):
    v.append(int(input()))
    if v[i] >= 10 and v[i] <= 20:
        dentro = dentro + 1
    else:
        fora = fora + 1

print(dentro, "in")
print(fora, "out")
