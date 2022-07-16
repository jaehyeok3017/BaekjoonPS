#include <stdio.h>
#include <string.h>

int main() {
    int s[30] = {0, };
    int num = 0;

    for(int i = 0; i<28; i++){
        scanf("%d", &num);
        s[num-1] = 1;
    }

    for(int i = 0; i<30; i++){
        if(s[i] != 1) printf("%d\n", i+1);
    }
}