#include <stdio.h>

int main() {
    char a[100001];

    int n;
    scanf("%d", &n);
    scanf("%s", a);

    printf("%c%c%c%c%c", a[n-5], a[n-4], a[n-3], a[n-2], a[n-1]);
}