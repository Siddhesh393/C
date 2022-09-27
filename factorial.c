#include "stdio.h"
int fact();
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
printf("The factorial of %d is %d.",n,fact(n));
return 0;
}
int fact(int a){
    int x;
    if(a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}