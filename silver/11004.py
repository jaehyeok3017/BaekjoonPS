a, b = input().split()

b = int(b)

l = list(map(int, input().split(" ")))
l.sort()

print(l[b-1])