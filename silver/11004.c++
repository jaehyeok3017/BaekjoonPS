#include <iostream>
#include <algorithm>

using namespace std;

int a[1000001];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0 ; i<n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n);

    printf("%d", a[k-1]);
}   