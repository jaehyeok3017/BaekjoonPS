#include <stdio.h>

int main() {
    int sum = 0;
    int n = 0;

    int min1 = 101;
    int min2 = 101;
    for(int i = 0; i<6; i++){
        scanf("%d", &n);
        sum += n;
        
        if(i < 4){
            if(n < min1) min1 = n;
        }
        
        else{
            if(n < min2) min2 = n;
        }
    }

    printf("%d", sum-min1-min2);
}