//Write a program to swap two number

#include <stdio.h>

void swap(int *a,int *b);// pointer *a and pointer *b are pointing to a and b 

int main(){
    int a=4;
    int b=5;
    swap(&a,&b);//&a and &b are the address of pointer
    printf("value of a and b after swap are %d , %d respectively",a,b);
    
}

void swap(int *a,int *b){
    int t=*a;
    *a=*b;//value of b is stored in a
    *b=t;//value of a is stored in  b

}
