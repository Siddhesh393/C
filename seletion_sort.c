#include<stdio.h>

void swap(int* s, int* t)
{
    int temp = *s;
    *s = *t;
    *t = temp;
}

void selectionsort(int a[], int size){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if(a[j] < a[i]){
                swap(&a[j],&a[i]);
            }
            printf("\nAfter %dth iteration: ",j);
            for (int i=0; i < size; i++)
                printf("%d   ",*(a+i));
        }
        // printf("\nAfter %dth iteration: ",i);
        // for (int i=0; i < size; i++)
        //     printf("%d   ",*(a+i));
    }
}

int main(){
    
    int n;
    printf("\n Enter Size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("\n Enter Array: ");
    for (int i=0; i<n; i++)
        scanf("%d",&i[a]);
    
    selectionsort(a, n);
    
    printf("\n Sorted Array is : ");
    for (int i=0; i<n; i++)
        printf("%d   ",*(a+i));

    return 0;
}