/*
pointer can be incremented or decremented

ptr++ (means it will increase as respective with int or float)

int = +4 if the address of num is 100 the after ptr++ it will become 104
float=
*/
#include<stdio.h>

int main(){

int age=22;
int *ptr=&age;
printf("%u\n",ptr);
ptr++;//it is int so difference is 4
printf("%u",ptr);
}