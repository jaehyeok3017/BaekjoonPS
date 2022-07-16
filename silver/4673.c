#include <stdio.h>

int main() {
    int a = 1;
    printf("%d\n", a);

    while(a < 10000){
        int newNum = 0;
        newNum += a;
        
        if(a < 10) newNum += a;

        while(a > 0){
            newNum += (a % 10);
            a /= 10;
        }

        printf("%d\n", newNum);
        a = newNum;
    }
}