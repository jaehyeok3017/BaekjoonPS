#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int a[26] = {0,};
    for(int i = 0; i<strlen(s); i++){
        if(a[s[i] - 97] == 0){
            a[s[i] - 97] = i + 1;
        }
    }

    for(int i = 0; i<26; i++){
        if (a[i] == 0) printf("-1 ");
        else printf("%d ", a[i] - 1);
    }
}
