#include <stdio.h>
#include <string.h>

int main() {
    int t = 0;
    scanf("%d", &t);

    char s[21];
    int r = 0;

    for(int i = 0; i<t; i++){
        scanf("%d", &r);
        scanf("%s", s);

        for(int j = 0; j<strlen(s); j++){
            for(int k = 0; k<r; k++){
                printf("%c", s[j]);
            }
        }    
        printf("\n");    
    }
}