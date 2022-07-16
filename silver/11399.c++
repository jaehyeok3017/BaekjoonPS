#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n);

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += sum + a[i];
    }

    printf("%d", sum);
}