#include <stdio.h>

int a[10000001];
int main() {
    int n;
    scanf("%d", &n);

    int input;
    for(int i = 0; i<n; i++){
        scanf("%d", &input);
        a[input-1]++;

        if(a[input-1] > 1){
            printf("%d", input);
            break;
        }
    }
}