#include "stdio.h"
int fun(int n, int pow){
    if()
        return 1;
    else
        return n*fun(n,pow-1);
}
int main(){
int power,base;
printf("Enter the base and power resp: ");
scanf("%d %d",&base,&power);
printf("The answer is %d.",fun(base,power));
return 0;
}