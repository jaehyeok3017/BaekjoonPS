a = input()

sum = 0
for i in range (len(a)):
    if(a[i] == ','):
        sum += 1

print(sum + 1)