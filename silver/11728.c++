#include <stdio.h>
#include <algorithm>

using namespace std;

int a[2000001];
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for(int i = 0; i<n1+n2; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n1+n2);

    for(int i = 0; i<n1+n2; i++){
        printf("%d ", a[i]);
    }
}