#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for(int i = 0 ; i<5; i++){
        int a;
        scanf("%d", &a);

        if(a == n) count++;
    }

    printf("%d", count);
}