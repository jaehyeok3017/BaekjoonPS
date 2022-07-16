#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[16];
    int day, month, year;

    int minyear = 0;
    int maxyear = 99999999;

    char minname[16] = "hello";
    char maxname[16] = "hello";

    int size, maxsize, minsize;
    for(int i = 0; i<n; i++){
        scanf("%s %d %d %d", name, &day, &month, &year);
        
        size = strlen(name);
        if(minyear < (year * 10000) + (month * 100) + day){
            minyear = (year * 10000) + (month * 100) + day;
            
            minname[size] = '\0';
            minsize = size;
            for(int i = 0; i<size; i++){
                minname[i] = name[i];
            }
        }

        if(maxyear > (year * 10000) + (month * 100) + day){
            maxyear = (year * 10000) + (month * 100) + day;
            for(int i = 14; i>=size; i--){
                minname[i] = '\n';
            }

            maxname[size] = '\0';
            maxsize = size;
            for(int i = 0; i<size; i++){
                maxname[i] = name[i];
            }
        }
    }

    for(int i = 0; i<minsize; i++){
        printf("%c", minname[i]);
    }

    printf("\n");

    for(int i = 0; i<maxsize; i++){
        printf("%c", maxname[i]);
    }
}