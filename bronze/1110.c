#include <stdio.h>

int main() {
    int n, frontN, backN, i = 0;
    scanf("%d", &n);

    int newN = n;
    do{
        if(newN < 10) newN = (newN * 10) + newN;

        else if(newN == 0){
            break;
        }

        else{
            frontN = (newN%10);
            backN = ((newN%10) + (newN/10)) % 10;
            newN = (frontN * 10) + backN;
        }
        i++;
    } while(n != newN);
    
    printf("%d", i);
}