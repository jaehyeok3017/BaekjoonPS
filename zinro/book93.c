#include <stdio.h>

int sortCheck(int index[], int len);

int main() {
    int idx[5] = {1, 2, 3, 4, 5};
    int idx2[5] = {1, 3, 5, 2, 4};

    printf("%d\n", sortCheck(idx, 5));
    printf("%d\n", sortCheck(idx2, 5));
}

int sortCheck(int index[], int len){
    int count = 0;

    for(int i = 0; i<len; i++){
        if(index[i] < index[i+1]){
            count++;
        }
    }

    if(count == len) return 1;
    else return 0;
}