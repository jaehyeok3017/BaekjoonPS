a = input()
leng = len(a)

aSum = 0

for i in range(0, leng):
    if(i != leng-1):
        if(a[i] == 'c' and (a[i+1] == '=' or a[i+1] == '-')):
            aSum -= 1
        
        if(i != leng-2):
            if(a[i] == 'd' and a[i+1] == 'z' and a[i+2] == '='):
                aSum -= 1
        
        if(a[i] == 'd' and a[i+1] == '-'):
            aSum -= 1

        if(a[i] == 'l' and a[i+1] == 'j'):
            aSum -= 1
        
        if(a[i] == 'n' and a[i+1] == 'j'):
            aSum -= 1
        
        if(a[i] == 's' and a[i+1] == '='):
            aSum -= 1

        if(a[i] == 'z' and a[i+1] == '='):
            aSum -= 1

    aSum += 1

print(aSum)