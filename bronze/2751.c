#include <stdio.h>
#include <string.h>

// 시간초과

int main() {
    int n, tmp = 0;
    int numList[20000001] = {0,};
    
    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        scanf("%d", &numList[i]);
    }
    
    for (int i = 0; i<n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (numList[j + 1] < numList[j]) {
				tmp = numList[j + 1];
				numList[j + 1] = numList[j];
				numList[j] = tmp;
			}
		}
	}
	
	for (int i = 0; i<n; i++){
	    printf("%d\n", numList[i]);
	}
}