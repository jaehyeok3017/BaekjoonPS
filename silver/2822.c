#include <stdio.h>

int main() {
    int sum[8] = {0, };
    int max[5] = {0, };
    
    for(int i = 0 ; i<8; i++){
        scanf("%d", &sum[i]);
        if(sum[i] > max[0]) max[0] = sum[i];

        for(int j = 0; j<4; j++){
            if(max[j] > max[j+1]){
                int tmp;
                tmp = max[j+1];
                max[j+1] = max[j];
                max[j] = tmp;
            }
        } 
    }

    int countSum = 0;
    for(int i = 0; i<5; i++){
        countSum += max[i];
    }
    printf("%d\n", countSum);

    for(int i = 0; i<8; i++){
        for(int j = 0; j<5; j++){
            if(sum[i] == max[j]){
                printf("%d ", i+1);
            }
        }
    }
}