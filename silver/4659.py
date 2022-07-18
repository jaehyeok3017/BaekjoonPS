a = 'hi'

while(a != "end"):
    a = input()

    if(a == "end"):
        break

    leng = len(a)

    one = 0
    two_a = 0
    max_two_a = 0
    two_b = 0
    max_two_b = 0
    three = 0

    for i in range(0, leng):
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u' ):
            one += 1
            
            two_a += 1
            two_b = 0

            if(two_a > max_two_a):
                max_two_a = two_a
        
        else:
            two_a = 0
            two_b += 1

            if(two_b > max_two_b):
                max_two_b = two_b

        if(a[i] == a[i-1] and i != 0):
            if(a[i] == 'e' or a[i] == 'o'):
                continue
            else:
                three += 1
    
    if(three > 0):
        print(f"<{a}> is not acceptable.")
        continue
    
    else:
        if(max_two_a >= 3 or max_two_b >= 3):
            print(f"<{a}> is not acceptable.")
            continue

        else:
            if(one > 0):
                print(f"<{a}> is acceptable.")
                continue
            
            else:
                print(f"<{a}> is not acceptable.")
                continue    

