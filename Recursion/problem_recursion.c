#include<stdio.h>

void printHw(int count);

int main(){
    printHw(10);
    return 0;
}

void printHw(int count){
    //here is condition from where to where 
    if(count==0){
        return;//we will return when it breaks the condition
    }
    printf("Hello World\n");//here its print for one times

    //we will again call function in function itself
    printHw(count-1);//count-1 because one time it is printed
}