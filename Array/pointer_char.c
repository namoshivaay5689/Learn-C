#include<stdio.h>

int main(){
    char star='*';
    char *ptr=&star;

    printf("%u\n",ptr);

    ptr++;//it is int so difference is 1

    printf("%u\n",ptr);


}