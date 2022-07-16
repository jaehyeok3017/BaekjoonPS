#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0;
    int count = 0;

    while(n > 0){
        if(n % 10 >= 5) {
            n += (10 * count) - (n % 10);
            if (count >= 1) a += (n % 10) * count;
            else a += (n % 10);
        }

        n /= 10;
        count += 10;
    }

    printf("%d", a);
}
