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

    check[1] = true;

    int a = 1;
    int checking = 0;

    while(a != 0){
        checking = 0;
        scanf("%d", &a);

        if (a == 0){
            break;
        }

        for (int i = a+1; i <= a*2; i++){
		    if (!check[i]) {
                checking++;
            }
        }

        printf("%d\n", checking);
    }   
}