/*Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
*/

#include<stdio.h>

int main(){

int num1,num2;
int sum;
int *ptr1,*ptr2;

printf("Enter the value of num1:\n");
scanf("%d",&num1);

printf("Enter the value of num2:\n");
scanf("%d",&num2);

//Assigning the address 
ptr1=&num1;
ptr2=&num2;

//suming the number
sum=*ptr1+*ptr2;

printf("The sum of num1 and num2 is : %d\n",sum);


}