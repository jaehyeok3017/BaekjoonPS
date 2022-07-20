from tabnanny import check


n = int(input())

a = list(map(int, input().split(" ")))
a.sort()

leng = len(a)
checklen = len(a)

sum = 0
for i in range(leng):
    sum += a[i] * checklen
    checklen -= 1

print(sum)
