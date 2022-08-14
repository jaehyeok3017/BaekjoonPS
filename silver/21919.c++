#include <iostream>

using namespace std;

bool check[100000001] = {false};

int main() {
    for(int i = 2; i<=10000000; i++){
        if(check[i] == false){
            for(int j = i+i; j<=10000000; j+=i){
                check[j] = true;
            }
        }
    }

    int a;
    scanf("%d", &a);

    long long int sum = 1;
    for(int i = 0; i<a; i++){
        long long int b = 0;
        scanf("%lld", &b);

        if(!check[b]){
            sum *= b;
            check[b] = true;
        }
    }

    if(sum == 1){
        printf("-1");
    }

    else{
        printf("%lld", sum);
    }
}