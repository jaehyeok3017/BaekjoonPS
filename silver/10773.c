#include <stdio.h>

int a[100000];
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
        
        if(a[i] == 0) {
            int count = i;

            for(int j = count; j >= 0; j--){
                if(a[j] != 0) {
                    a[j] = 0;
                    break;
                }
            } 
        }
    }

    int sum = 0;
    for(int i = 0; i<n; i++) sum += a[i];

    printf("%d", sum);
}