#include <iostream>
#include <algorithm>

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
            char buf = i;
		    reverse(buf.begin(), buf.end()); 
		    if(input != "0") {
			    if(input == buf) cout << "yes\n";
			}
        }
    }
    
    printf("-1");
}