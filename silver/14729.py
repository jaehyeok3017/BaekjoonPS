import sys
input=sys.stdin.readline

n=int(input().rstrip())

l = []

for i in range(n):
    l.append(float(input().rstrip()))

l.sort()

for i in range(7):
    print(f'{l[i]:.3f}')
