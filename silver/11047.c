#include <stdio.h>

int nval[11] = {0,};
int main() {
    int n, won;
    scanf("%d %d", &n, &won);

    for(int i = 0; i<n; i++){
        scanf("%d", &nval[i]);
    } 

    int count = 0;
    for(int i = n; i>0; i--){
        if(won < nval[i]) continue;
        else if(won >= nval[i] && won > 0){
            while(won >= nval[i]){
                won -= nval[i];
                count++;
            }
        }
    }

    printf("%d", count);
}