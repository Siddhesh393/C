#include<stdio.h>
int main(){
    int i,j,k,key;
    int a[]= {1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while((j>=0)&&(key>a[j])){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        printf("\nAfter the %dth iteration ",i);
        for(k=0;k<n;k++){
            printf("%d ",a[k]);
        }
    }
    printf("\nThe reversed array is ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);   
}
}