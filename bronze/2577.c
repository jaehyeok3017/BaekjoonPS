#include <stdio.h>

int main(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long sum = a * b * c;
    int numCount[10] = {0,};

    while(sum > 0){
		int num = sum % 10;
		numCount[num]++;
        sum /= 10;
    }

    for(int i = 0; i<10; i++){
        printf("%d\n", numCount[i]);
    }
}