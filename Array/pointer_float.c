#include<stdio.h>

int main(){
    float age =34.43;
    float *ptr=&age;
    
    printf("%u\n",ptr);

    ptr++;

    printf("%u\n",ptr);//it is int so difference is 4


}