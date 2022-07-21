import sys
input=sys.stdin.readline

n=int(input().rstrip())
l = []

for i in range(n):
    l.append(int(input().rstrip()))

    len1 = len(l)
    if (l[len1-1] == 0):
        for i in range(2):
            l.pop()

leng = len(l)
sum = 0
for i in range(leng):
    sum += l[i]

print(sum)