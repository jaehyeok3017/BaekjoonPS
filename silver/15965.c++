#include <iostream>

using namespace std;

bool check[100000001] = {false};

int main() {
    int a;
    scanf("%d", &a);

    for(int i = 2; i<=10000000; i++){
        if(check[i] == false){
            for(int j = i+i; j<=10000000; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = true;
    int checking = 0;

    for (int i = 2; i <= 10000000; i++){
		if (!check[i]) {
            checking++;
            if(checking == a){
                printf("%d", i);
            }
        }
    }
}