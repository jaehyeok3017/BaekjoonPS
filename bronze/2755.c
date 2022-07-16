#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int all = 0;
    double allCount = 0.0;

    for(int i = 0; i<n; i++){
        char a[101] = {0, };
        int b = 1;
        char c[3] = {0, };

        scanf("%s", a);
        scanf("%d", &b);
        scanf("%s", c);

        double count = 0.0;
        if(c[1] == '+') count += 0.3;
        else if (c[1] == '-') count -= 0.3;

        if(c[0] == 'A') count += 4.0;
        else if(c[0] == 'B') count += 3.0;
        else if(c[0] == 'C') count += 2.0;
        else if(c[0] == 'D') count += 1.0;

        allCount += count * b;
        all += b;
    }

    printf("%.2lf", (allCount / all) + 0.000000000001);
}