/*
Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
*/
#include<stdio.h>

int sum_num(int *a,int *b);
int main(){
    int x=5;
    int y=6;
    int sum;
    sum=sum_num(&x,&y);
    printf("the sum of x (%d) and y (%d) is sum (%d)\n",x,y,sum);

}
int sum_num(int *a,int *b){
    int sum;
    sum=*a+*b;
    return sum;
}