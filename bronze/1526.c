#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 0;
    int i = 0;

    while(n > 0){
        if(n > 10){
            if((n/10) >= 7 || (n/10) == 0) {
                if(i == 0) num += 7;
                else num += 7 * (i * 10);
            }

            else {
                if(i == 0) num += 4;
                else num += 4 * (i * 10);
            } 
        }

        else{
            if((n%10) >= 7 || (n%10) == 0) {
                if(i == 0) num += 7;
                else num += 7 * (i * 10);
            }
            else{
                if(i == 0) num += 4;
                else num += 4 * (i * 10);
            } 
        }
        
        i++;
        n /= 10;
    }

    printf("%d", num);
}