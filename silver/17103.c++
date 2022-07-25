#include <iostream>

using namespace std;

bool check[1000001] = {false};

int main() {
    int a;
    scanf("%d", &a);

    for(int i = 2; i<=1000000; i++){
        if(check[i] == false){
            for(int j = i+i; j<=1000000; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = true;

    while(a != 0){
        int n;
        scanf("%d", &n);

        int count = 0;

        for (int i = 2; i <= n/2; i++){
            if (check[n - i] == false && check[i] == false) {
                count++;
            }
        }

        printf("%d\n", count);
        a--;
    }
}