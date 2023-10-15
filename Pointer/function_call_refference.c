/*
CALL BY REFERENCE:-we pass address of variable as argument
*/
#include <stdio.h>

void square(int *n);
int main(){
    int n=4;
    printf("the number is %d\n",n);
    square(&n);
    printf("the number is %d\n",n);//
}
void square(int *n){
    *n=(*n)*(*n);//here *n is value of address 4*4
    printf("%d\n",*n);
}