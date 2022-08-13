#include <stdio.h>
#include <string.h>

void quickSort(int arr[], int L, int R) {
      int left = L, right = R;
      int pivot = arr[(L + R) / 2];    // pivot 설정 (가운데) 
      int temp;
      do
      {
        while (arr[left] < pivot){
            left++;
        }  

        while (arr[right] > pivot){
            right--;
        }

        if (left<= right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
      } while (left<= right);
 
    if (L < right)
        quickSort(arr, L, right); 
 
    if (left < R)
        quickSort(arr, left, R);
}


int main() {
    int a[9] = {9, 4, 8, 3, 5, 7, 2, 6, 1};

    for(int i = 0; i<9; i++){
        printf("%d", a[i]);
    }

    printf("\n");
    quickSort(a, 0, 9);


    for(int i = 0; i<9; i++){
        printf("%d", a[i]);
    }
    
    printf("\n");
}