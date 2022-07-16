#include <stdio.h>

int a[10] = {0, };
int b[10] = {0, };

int main() {
    for(int i = 0; i<9; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<9; i++){
        scanf("%d", &b[i]);
    }

    int sum1 = 0;
    int sum2 = 0;
    int set = 0;

    for(int i = 0; i<9; i++){
        if((sum1 + a[i] > sum2)){
            set = 1;
        }
        
        sum1 += a[i];
        sum2 += b[i];
    }
    
    if(set >= 1) printf("Yes");
    else printf("No");
}