#include <iostream>

using namespace std;

int main() {
    long long int a;
    scanf("%lld", &a);

    long long int pluscount = 1;
    long long int count = 0;
    int one = 0;

    for(int i = 1 ; i<=a; i++){
        if(i == 10 || i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 10000000 || i == 100000000) one++;
        count += pluscount + one;
    }

    printf("%lld", count);
}