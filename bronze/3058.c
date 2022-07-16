#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i<n; i++){
        int min = 9999;
        int sum = 0;

        for(int j = 0; j<7; j++){
            int num;
            scanf("%d", &num);

            if(num < min && num % 2 == 0) {
                min = num; 
                sum += num;
            }
            else if(num % 2 == 0) sum += num;
        }

        printf("%d %d\n", sum, min);
    }
}