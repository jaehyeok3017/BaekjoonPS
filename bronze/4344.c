#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        int inn;
        scanf("%d", &inn);
        
        int a[1001] = {0, };
        int sum = 0;

        for(int j = 0; j<inn; j++){
            scanf("%d", &a[j]);
            sum += a[j];
        }

        double avg = (double)sum / inn;
        int cnt = 0;
        for(int j = 0; j<inn; j++){
            if(avg < a[j]) cnt++;
        }
        
        printf("%.3lf%%\n", (double)cnt * 100 / inn);
    }
}