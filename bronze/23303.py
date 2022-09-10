a = input()
b = False

for i in range(len(a) - 1):
    if((a[i] == "D" and a[i+1] == "2") or (a[i] == "d" and a[i+1] == "2")):
        b = True

if(b == True): print("D2")
else: print("unrated")