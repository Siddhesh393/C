#include<stdio.h>
void swap(int* s, int* t)
{
    int temp = *s;
    *s = *t;
    *t = temp;
}
int partition(int a[], int p, int r)
{
    int pivot = a[r];
    int i = p-1;
    for (int j=p; j<=r-1; j++)
    {
        if (a[j]<=pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    i = i+1;
    int q = i;
    swap(&a[q], &a[r]);
    return q;
}
void quicksort(int a[], int p, int r)
{
    if(p<r) {
        int q = partition(a,p,r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    } 
}
int main() {
    printf("\n Enter Size: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("\n Enter Array: ");
    for (int i=0; i<n; i++)
        scanf("%d",&i[a]);
    
    quicksort(a,0,n-1);

    printf("\n Sorted Array is : ");
    for (int i=0; i<n; i++)
        printf("%d   ",*(a+i));
}
