#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int c;
    scanf("%d", &c);

    b += c;
    for(int i = 0; i<(c / 60) + 1;i++){
    if(b > 59){
        b -= 60;
        a++;
    }

    if (a > 23){
        a -= 24;
    }
    }
    

    printf("%d %d", a, b);
}