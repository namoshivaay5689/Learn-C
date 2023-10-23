/*
ARRAY AS FUNCTION ARGUMENT

function declaration
void printNumber(int arr[],int n)
            or
void printNumber(int *arr,int n)

function call
printNumber(arr,n)
*/
#include <stdio.h>

void printNumber(int *arr,int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printNumber(arr,6);
    return 0;
}

void printNumber(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}