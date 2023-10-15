#include <stdio.h>

int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",_age);
    //address
    printf("%p\n",&age);//Give the value of address
    printf("%p\n",ptr);//Give the value of address
    //address of ptr
    printf("%p\n",&ptr);

    //value

    //print the value stored in address
    printf("%d\n",*ptr);
    //print the value stored in address
    printf("%d\n",*(&age));
    return 0;
}