//Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
#include <stdio.h>

int main(){
    //value of address
    int num=11;//declaring the value of the num
    int *ptr;//declaring the pointer to the num
    //address of pointer
    ptr=&num;//giving address to the num

    printf("%d\n",&num);//address
    printf("%d",*ptr);//value
    
    return 0;
}