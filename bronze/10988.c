#include <stdio.h>
#include <string.h>

char a[101];

int main() {
    scanf("%s", a);

    for(int i = 0; i<strlen(a); i++){
        if(a[i] != a[strlen(a) - i - 1]) {
            printf("0");
            break;
        }

        if(i == strlen(a) - 1) printf("1");
    }
}