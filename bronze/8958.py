n = int(input())

for i in range(n):
    a = input()

    strlen = len(a)
    ascount = 0
    count = 0
    for j in range(strlen):
        if(a[j] == 'O'):
            ascount += 1

        else:
            ascount = 0
        
        count += ascount

    print(count)
