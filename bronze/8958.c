#include <stdio.h>

// trying

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        char a[81];
        scanf("%s", a);

        int i = 0, count = 0, wasO = 0;
        while(a[i] == "\0"){
            if(a[i] == "O"){
                wasO++;
                count += wasO;
            }

            if (a[i] == "X"){
                wasO = 0;
            }
            i++;
        }

        printf("%d", count);
        count = 0;
    }
    


}