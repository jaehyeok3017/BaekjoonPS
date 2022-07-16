#include <stdio.h>

int main() {
    int n[42] = {0,};
    int a = 0, count = 0;

    for(int i = 0; i<10; i++){
        scanf("%d", &a);

        if(n[a%42] == 0) {
            n[a%42]++;
            count++;
        }
    }

    printf("%d", count);
}