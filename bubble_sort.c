#include "stdio.h"

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            
            printf("\nAfter %dth iteration: ",j);
                for (int i=0; i < n; i++)
                    printf("%d   ",*(arr+i));
        }
            
}
 

int main(){
    
    int n;
    printf("\nEnter size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("\nEnter the array: ");
    
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    bubble_sort(a,n);
    
    printf("\nSorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }

    return 0;
}