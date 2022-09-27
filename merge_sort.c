#include <stdio.h>
#include <limits.h>


void merge (int a[],int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];
    int i, j;
    for(i = 0; i < n1; i++){
        L[i] = a[p+i];
    }
    for(j = 0; j < n2; j++){
        R[j] = a[q+j+1];
    }
    L[n1] = R[n2] = INT_MAX ; 
    int n = n1 + n2;
    i = j = 0;
    for(int k = p; k <= r; k++){
        if(L[i] <=  R[j])
            a[k] = L[i++];
        else
            a[k] = R[j++];
    }
}

void mergeSort(int a[], int p, int r){
    int q;
    if (p < r){
        q = (p + r)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
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
    mergeSort(a,0,n-1);
    printf("\nSorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
}
