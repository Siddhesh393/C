#include<stdio.h>

int Sum(int n){
    int sum;
    if(n==0){
        return sum;
    }
    else{
        return n+Sum(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number for the Sumation of n natural numbers: ");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}