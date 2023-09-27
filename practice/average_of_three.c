// write a program to calculate average of three  numbers

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the numbers for average\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int avg=(a+b+c)/3;
    printf("The average of three number %d \n",avg);
}