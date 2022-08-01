#include <iostream>

int d[1001];

int go(int n){
    if (n == 1) return 1;
	if (n == 2) return 2;
    if (d[n] > 0) return d[n];

    d[n] = (go(n-1) + go(n-2)) % 10007;
    return d[n];
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", go(a));
}