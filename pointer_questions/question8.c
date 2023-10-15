//write a program to compare and make difference between pointer

#include<stdio.h>

int main(){
    int age=34;
    int _age=36;

    int *ptr=&age;
    int *_ptr=&_age;

    printf("%d and %d The difference is : %d\n ",ptr,_ptr,ptr-_ptr);

    _ptr=&age;

    printf("The Compare = %d ",ptr==_ptr);

}