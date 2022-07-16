#include <stdio.h>
#include <string.h>

// trying
char a[1000001];

int main() {
    scanf("%s", a);

    int count = 0;
    for(int i = 0; i<strlen(a); i++){
        if(i != 0 || i != strlen(a) - 1) continue;
        if(a[i] == " ") count++;
    }

    printf("%d", count);
}