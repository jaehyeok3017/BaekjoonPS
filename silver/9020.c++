#include <iostream>

using namespace std;

bool check[10001] = {false};

int main() {
    int a;
    scanf("%d", &a);

    for(int i = 2; i<=10000; i++){
        if(check[i] == false){
            for(int j = i+i; j<=10000; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = true;

    while(a--){
        int n;
        scanf("%d", &n);

        int i1 = 1;
        int i2 = 1;
        int min = 999;

        for (int i = 2; i <= n/2; i++){
            if (check[n - i] == false && check[i] == false) {
                if(min > (n-i) - i){
                    i1 = n-i;
                    i2 = i;
                    min = i1 - i2;
                }
            }
        }

        printf("%d %d\n", i2, i1);
    }
}