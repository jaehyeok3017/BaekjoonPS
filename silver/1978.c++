#include <stdio.h>

bool prime(int a){
    if(a < 2) return false;
    
    for(int i = 2; i*i<=a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 0; i<n; i++){
        int a;
        scanf("%d", &a);
        
        bool result = prime(a);
        if(result == true) count++;
    }

    printf("%d", count);
}