#include <stdio.h>

int a[10001];

int main() {
    int n = 0, num;
    scanf("%d", &n);

    for(int i = 0 ; i<n; i++){
        scanf("%d", &num);
        a[num]++;
    }

    for(int i = 0; i<10001; i++){
        for(int j = 0; j<a[i]; j++){
            printf("%d\n", i);
        }
    }
}