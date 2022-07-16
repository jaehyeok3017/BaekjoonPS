#include <stdio.h>

int main() {
    int a[101] = {0, };
    int sum = 0, n = 0;
    int max = 1;

    for(int i = 0; i<10; i++){
        scanf("%d", &n);
        sum += n;
        a[n/10]++;

        if(a[n/10] > max) max = n;
        printf("%d ", max);
    }

    printf("%d\n%d", sum / 10, max);
}