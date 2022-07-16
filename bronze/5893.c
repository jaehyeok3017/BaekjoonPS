#include <stdio.h>

int main() {
    long long a;
    scanf("%d", &a);

    a *= 17;
    for(int i = 0; i<sizeof(a); i++){
        int result = a >> i & 1;
        printf("%d", result);
    }
}