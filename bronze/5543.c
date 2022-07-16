#include <stdio.h>

int main() {
    int sum = 0;
    int n = 0;

    int min1 = 2001;
    int min2 = 2001;
    for(int i = 0; i<5; i++){
        scanf("%d", &n);
        
        if(i <= 2){
            if(n < min1) min1 = n;
        }
        
        else{
            if(n < min2) min2 = n;
        }
    }

    printf("%d", min1+min2-50);
}