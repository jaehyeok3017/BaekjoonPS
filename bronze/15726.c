#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a*b/c > a/b*c) printf("%d", a*b/c);
    else printf("%d", a/b*c);
}