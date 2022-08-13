#include <stdio.h>

int main() {
    int a[5] = {5, 3, 2, 4, 1};

    for(int i = 0; i<5; i++){
        printf("%d", a[i]);
    }

    printf("\n\n");

    for(int i = 0; i<5; i++){
        int key = a[i];
        int j = 0;

        for(j = i-1; j >= 0 && a[j] > key; j--){
            a[j+1] = a[j];
        }

        a[j+1] = key;

        for(int k = 0; k<5; k++){
            printf("%d", a[k]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i<5; i++){
        printf("%d", a[i]);
    }
}