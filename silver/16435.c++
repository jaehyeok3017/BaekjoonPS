#include <iostream>
#include <algorithm>

using namespace std;

int a[1000];

int main() {
    int l, n;
    scanf("%d %d", &n, &l);

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n);

    for(int i = 0; i<n; i++){
        if(a[i] <= l) l++;
    }

    printf("%d", l);
}