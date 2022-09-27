#include <stdio.h>
int main(){
    int a[]= {6,3,5,4,2,1};
    int i,j,k,key;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++){
        key=a[i];
        j=i-1;
        while((j>=0)&&(key<a[j])){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        printf("\nAfter the %dth iteration ",i);
        for(k=0;k<n;k++){
            printf("%d ",a[k]);
        }
    }
    printf("\nThe sorted array is ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    } 
}