//Print the value  of i from its pointer to pointer
#include<stdio.h>

int main(){
    int i=100;
    int *ptr=&i;
    int _i=*ptr;
    int **pptr=&ptr;
    int __i=**pptr;

    printf("%d\n",__i);
}
