#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count[2] = {0,};
    int in;
    for(int i = 0 ; i< n; i++){
        scanf("%d", &in);
        count[in]++; 
    }

    if(count[0] > count[1]) printf("Junhee is not cute!");
    else if(count[1] > count[0]) printf("Junhee is cute!");
}