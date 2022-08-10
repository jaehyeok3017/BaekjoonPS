#include <iostream>

using namespace std;

bool check[1000000] = {false};

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 2; i<=b; i++){
        if(check[i] == false){
            for(int j = i+i; j<=b; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = true;

    int i = a;
    int sum = 0;
    int min = 0;
    bool firstPrintCheck = false;

    for (i = a; i <= b; i++){
		if (!check[i]) {
            sum += i;
            
            if(firstPrintCheck == false){
                firstPrintCheck = true;
                min = i;
            }
        }
    }

    if(firstPrintCheck == false){
        printf("-1");
    }

    else{
        printf("%d\n%d", sum, min);
    }
}