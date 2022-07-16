#include <stdio.h>

int main() {
    int max = 0;
    int n;

    int a, b;
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=9; j++){
            scanf("%d", &n);
            if(max < n) {
                max = n;
                a = i;
                b = j;
            }
        }
    }

    printf("%d\n%d %d", max, a, b);
}