a = []
b = []

for i in range(10):
    a.append(int(input()))

for i in range(10):
    b.append(int(input()))

a.sort()
b.sort()

print(f"{a[-1] + a[-2] + a[-3]} {b[-1] + b[-2] + b[-3]}")