#include <stdio.h>

int main(){
    int min = 9999;
    int sum = 0;

    for(int i = 0 ; i<7 ; i++){
        int a;
        scanf("%d", &a);

        if(a % 2 != 0){
            if(a < min) {
                min = a;
            }

            sum += a;
        }
    }

    if(min != 9999) printf("%d\n%d", sum, min);
    else printf("-1");
}