#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int x=4;
    int y=6;
    swap(&x,&y);
    printf("x is %d and y is %d \n",x,y);
    return 0;

}

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;

}