#include <stdio.h>

int main() {
    int a = 0, n = 0;
    scanf("%d", &n);

    double sum = 0;
    for(int i = 0 ; i<n; i++){
        scanf("%d", &a);
        sum += a;
    }

    printf("%.8lf", sum / n);
}