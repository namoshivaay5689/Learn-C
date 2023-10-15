//Write a program in C to show the basic declaration of a pointer.
#include <stdio.h>

int main(){
    int age=22;
    int *age1=&age;
    int _age=*age1;

    printf("%d\n",&age);
    printf("%d",*age1);
}
