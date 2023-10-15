#include<stdio.h>

int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    //pointer to pointer

    int **pptr=&ptr;//here it is pointing to the address to the ptr where the address of the age
    int __age=**pptr;

    //address
    printf("%d\n",&age);
    printf("%d\n",&ptr);
    //value
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);
}