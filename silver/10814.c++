#include <iostream>
#include <algorithm>

using namespace std;

struct Info{
    int age;
    char name[101];
    int count;
};

int main() {
    Info in = getinfoPoint();

    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        Info& in = info[i];
        scanf("%d %s", &in.age, in.name);
        in.count = i;
    }

    sort(info, info+n);

    for(int i = 0; i<n; i++){
        printf("%d %s\n", info[i].age, info[i].name);
    }
}