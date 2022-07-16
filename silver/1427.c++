#include <stdio.h>
#include <algorithm>

using namespace std;

char a[11] = {0, };
int main(){
    long long b = 0;
    scanf("%lld", &b);

    int i = 0;
    while(b % 10 >= 0){
        a[i] = b % 10;
        b /= 10;
        i++;
    }

    sort(a, a+sizeof(a));

    for(int j = sizeof(a); j>=0; j--){
        printf("%c", a[j]);
    }
}