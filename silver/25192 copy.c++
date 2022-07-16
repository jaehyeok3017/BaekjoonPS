#include <stdio.h>
#include <set>
#include <algorithm>
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
    }

    sort(s, s+s.size());

    for(int i = 0 ; i<n; i++){

    }
}