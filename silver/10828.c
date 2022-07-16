#include <stdio.h>
#include <string.h>

int stack[10001] = {0, };
int length = 0;

int main() {
    int n;
    scanf("%d", &n);

    while(n-- > 0){
        char a[5];
        scanf("%s", a);

        if(strcmp(a, "push")){
            int b;
            scanf("%d", &b);

            stack[length++] = b;
        }

        else if(strcmp(a, "pop")){
            if(length > 0){
                printf("%d", stack[length]);
                stack[length--] = 0;
            }
            
            else printf("-1");
        }

        else if(strcmp(a, "size")){
            printf("%d", length+1);
        }

        else if(strcmp(a, "empty")){
            if(length == 0) printf("1"); 
            else printf("0");
        }

        else if(strcmp(a, "top")){
            if(length > 0){
                printf("%d", stack[length]);
            }
            else printf("-1");
        }
    }
}