#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 0 ; i<n; i++){
        char eng[26] = {0,};
        char a[101];
        scanf("%s", a);

        int len = strlen(a);
        for(int j = 0; j<len; j++){
            if(eng[a[j]] > 1 && eng[a[j]-1] != eng[a[j]]){
                break;
            }

            if(j == len-1) count++;
            eng[a[j]]++;
        }
    }

    printf("%d", count);
}