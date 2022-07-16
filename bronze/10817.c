#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int count = 0;

    if((a <= b && b <= c) || (c <= b && b <= a)){
        count++;
        printf("%d", b);
    }

    else if (((b <= a && a < c) || (c <= a && a <= b)) && count == 0){
        count++;
        printf("%d", a);
    }

    else if (((b <= c && c <= a) || (a <= c && c <= b)) && count == 0){
        count++;
        printf("%d", c);
    }
}
