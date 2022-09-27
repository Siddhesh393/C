#include <stdio.h>
#include <stdlib.h>
 
int main(){
int num, i, j=0, k;
printf("Enter the number of digits of the pattern:");
scanf("%d", &num);
int *list = (int*)malloc(sizeof(int)*num);
int *result = (int*)malloc(sizeof(int)*num);
 printf("Enter the digits of the pattern: ");
for(i = 0; i< num; i++){
scanf("%d", (list+i));
}
for(i=0; i<3; i++){
result[i] = list[i];
}
j = 3;
for(k = 1; k< num/3 && list[k*3+2] != list[0]; k++){
 
result[i++] = list[k*3+2];
 
}

printf("The number of digits the pattern contains: %d\n", i);
printf("The pattern required is: ");
for(j=0; j<i; j++){
printf("%d ", result[j]);
}
return 0;
}

