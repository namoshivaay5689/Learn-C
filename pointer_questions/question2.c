//Write a program in C to demonstrate how to handle pointers in a program.

#include<stdio.h>

int main(){

    int num=98;//declare a number
    int *pointer;//Declaring a pointer to an integer

    pointer=&num;//Assigning the address to the number

    printf("Value of the number : %d\n ",num);
    printf("Value of address : %d\n",&num);

    *pointer=100;//modifying the value of num
    
    printf("Value of the number : %d\n ",num);
    printf("Value of address : %d",&num);
}