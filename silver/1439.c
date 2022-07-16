#include <stdio.h>
#include <string.h>

char a[1000001];
int main() {
    
    scanf("%s", a);

    int count = 0;
    char status = a[0];

    for(int i = 0; i < strlen(a); i++){
        if(status != a[i]){
            count++;
            status = a[i];
        }
    }

    if(count % 2 == 0) printf("%d", count/2);
    else printf("%d", count/2+1);
}