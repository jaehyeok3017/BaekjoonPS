#include <stdio.h>

int main() {
    int a[5] = {5, 3, 2, 4, 1};

    for(int i = 0; i<5; i++){
        printf("%d", a[i]);
    }

    printf("\n\n");

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4-i; j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    }

    printf("\n");

    for(int i = 0; i<5; i++){
        printf("%d", a[i]);
    }
}