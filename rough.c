#include<stdio.h>

int Sum(int n){
    if(n==0)
    {
        return 0;
    }
    int pre=Sum(n-1);
    return Sum(n)+pre;
}

int main(){
    int n;
    printf("Enter the number for the Sumation of n natural numbers: ");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}