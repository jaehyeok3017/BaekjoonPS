#include <stdio.h>
#include <string.h>

char a[100000];

int main() {
    while(1){
        scanf("%s", a);
        if(strcmp(a, "0") == 0) break;
        
        for(int i = 0; i<strlen(a); i++){
            if(a[i] != a[strlen(a) - i - 1]) {
                printf("no\n");
                break;
            }

            if(i == strlen(a) - 1) printf("yes\n");
        }

    }
}