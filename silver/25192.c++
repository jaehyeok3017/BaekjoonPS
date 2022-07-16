#include <stdio.h>
#include <set>
#include <string>

using namespace std;

int main () {
    int n;
    scanf("%d", &n);

    set<string> s;
    set<string> :: iterator iter;

    int size = 0;
    for(int i = 0; i<n; i++){
        char a[100000];
        scanf("%s", a);

        s.insert(a);

        iter = s.find("ENTER");
        if(iter != s.end()){
            s.erase("ENTER");
            size += s.size();
            s.clear();
        }
    }

    size += s.size();

    printf("%d", size);
}