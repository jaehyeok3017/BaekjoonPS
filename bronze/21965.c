#include <stdio.h>

int a[100001];
int main() {
    int n;
    scanf("%d", &n);

    int uping = 1;
    int i;
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i] > a[i-1]){
            if(uping == 1){
                continue;
            }

            else{
                break;
            }
        }

        if(a[i] < a[i-1]){
            if(uping == 0){
                continue;
            }

            else{
                uping = 0;
            }
        }

        if(a[i] == a[i-1]){
            break;
        }
    }

    if(i == n) printf("YES");
    else printf("NO");
}