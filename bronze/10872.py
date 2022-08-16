n = int(input())

def fi(n):
    if(n <= 1):
        return 1
    
    return n * fi(n-1)

print(fi(n))