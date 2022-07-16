#include <stdio.h>
#include <string.h>

char a[1000001];

int main() {
    int count[27] = {0,};

    scanf("%s", a);

    int len = strlen(a);
    for(int i = 0; i<len; i++){
        if(a[i] >= 65 && a[i] <=90){
            int k = a[i] - 65;
            count[k]++;
        }
        
        else if(a[i] >= 97 && a[i] <=122){
            int k = a[i] - 97;
            count[k]++;
        }
    }
    
    int max = 0;
    int maxIndex = 0;
    int maxCount = 0;
    for(int i = 0; i<27; i++){
        if(count[i] > max) {
            max = count[i];
            maxIndex = i;
        } 
    }

    for(int i = 0; i<27; i++){
        if(max == count[i]) maxCount++;
        if(maxCount > 1){
            printf("?");
            break;
        }

        if(i == 26) printf("%c", maxIndex + 65);
    }
}