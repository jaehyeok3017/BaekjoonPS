#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000] = {0, };
    int b;

    for(int i = 0; i < n; i++){
        scanf("%d", &b);
        a[b]++;
    }

    for(int i = 0 ; i<1000; i++){
        if (a[i]) printf("%d ", i);
    }

}