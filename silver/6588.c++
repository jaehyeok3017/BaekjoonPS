#include <iostream>

using namespace std;

bool check[1000000] = {false};

int main() {
    int n = 9999;

    for(int i = 2; i<=1000000; i++){
        if(check[i] == false){
            for(int j = i+i; j<=1000000; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = false;

    while(n != 0){
        scanf("%d", &n);
        
        for (int i = 2; i <= n; i++){
            if (check[n - i] == false && check[i] == false) {
                printf("%d = %d + %d\n", n, i, n-i);
                break;
            }
        }
    }
}