#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<char> a(20000);

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        scanf("%s", a[i]);
    }
    
    sort(a.begin(), a.end());

    for(int i = 0; i<n; i++){
        printf("%s\n", a[i]);
    }
}

