//Add two number using parameter function argument
#include <stdio.h>

int addSum(int a, int b);

int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:\n");
    scanf("%d",&b);

    addSum(a, b);
}
int addSum(int a, int b){
    int sum;
    sum=a+b;
    printf("Here goes the sum\n");
    printf("%d",sum);
}
