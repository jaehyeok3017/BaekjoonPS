#include <iostream>

int d[12];

int go(int n){
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;

    for(int i = 4; i<12; i++){
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    return d[n];
}

int main() {
    int a;
    scanf("%d", &a);

    for(int i = 0; i<a; i++){
        int b;
        scanf("%d", &b);
        printf("%d\n", go(b));    
    }
}