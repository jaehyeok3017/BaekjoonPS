#include <iostream>
#include <algorithm>

using namespace std;

int a[100000];
int main() {
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    sort(a, a+n);

    for(int i = 0; i<n; i++){
        if(a[i] == a[i+1]){
            continue;
        }

        else{
            printf("%d ", a[i]);
        }
    }
}