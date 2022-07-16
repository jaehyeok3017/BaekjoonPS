#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        int y, m;
        scanf("%d %d", &y, &m);

        m--;
        if(m == 0) printf("%d 12 31\n", y-1);
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) printf("%d %d 31\n", y, m);
        else if(m == 4 || m == 6 || m == 9 || m == 11) printf("%d %d 30\n", y, m);
        else if(m == 2){
            if((y != 2100) && (y % 400 == 0 || y % 4 == 0)) printf("%d %d 29\n", y, m);
            else printf("%d %d 28\n", y, m);
        }
    }
}