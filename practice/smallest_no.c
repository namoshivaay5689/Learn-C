//Write a program to print a smallest number

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number 1\n");
    scanf("%d",&a);
    printf("Enter the number 2\n");
    scanf("%d",&b);
    printf("The smallest number is %d ",a<b ? a:b);/*The ternary operator a < b ? a : b is used to compare the values of a and b. 
                                                    If a is less than b, it returns the value of a; otherwise, it returns the value of b*/

}
