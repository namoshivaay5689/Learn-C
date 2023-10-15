/*
CALL BY VALUE:-we pass value of variable as argument
*/
#include<stdio.h>

void square(int n);


int main(){
    int n=4;
    printf("the number is %d\n",n);
    square(n);
    printf("the number is %d\n",n);//the function do not change the main function
}
void square(int n){
    n=n*n;
    printf("%d\n",n);
}