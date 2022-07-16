#include <stdio.h>

int a[1001];
int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", a[i]);
    }

    int cnt = 0;
    for(int i = 0; i<n; i++){
        int j = 0;
        for(j = 0; j<i; j++){
            if(a[i] % j == 0) break;
        }

        if(j == i) cnt++;
    }

    printf("%d", cnt);
}