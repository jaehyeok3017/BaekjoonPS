#include <Stdio.h>
#include <String.h>

int main() {
    char s[101];
    scanf("%s", s);
    for(int i = 1; i<=strlen(s); i++){
        printf("%c", s[i-1]);

        if(i % 10 == 0) printf("\n");
    }
}