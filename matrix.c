#include "stdio.h"
int main(){
    int a[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("The determinant of the matrix is %d.");
return 0;
}