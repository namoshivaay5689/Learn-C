//Print table of a number using passing argument
#include<stdio.h>

void printTable(int n);  //argument/actual parameter

int main(){
    int n;
    printf("Enter the number whose table :\n");
    scanf("%d",&n);
    printTable(n);
}
//what ever done in function not reflect in main function
void printTable(int n){   // parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
