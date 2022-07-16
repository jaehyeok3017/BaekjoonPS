#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a, b;
    scanf("%d %d", &a, &b);

    int chicken = 0;
    while(n > 0 && (a >= 2 || b >= 1)){
        n--;

        if (a >= 2) a -= 2;
        else if (b >= 1) b -= 1;

        chicken++;
    }

    printf("%d", chicken);
}