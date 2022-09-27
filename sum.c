#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  numbers to  be added: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nThe sum is %d.",sum);
    return 0;
}