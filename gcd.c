#include "stdio.h"
int gcd(int a,int b){
    int c;
    if(a<b)
        c=a;
    else
        c=b;
    
    
    


}
int main(){
    int a,b;
    printf("Enter the numbers to find the gcd: ");
    scanf("%d %d",&a,&b);
    printf("The gcd of the numbers %d and %d is %d.",a,b,gcd(a,b));
    return 0;
}