#include <stdio.h>

int main() {
    int a = 0;
    int sum = 0;

    for(int i = 0; i<5; i++){
        scanf("%d", &a);

        if(a < 40) a = 40;
        sum += a;
    }

    printf("%d", sum/5);
}