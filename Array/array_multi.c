/*
2D Arrays

Declare
    int arr[][]={{1,2},{3,4}}

Access
    int arr[0][0]
    int arr[0][1]
    int arr[1][0]
    int arr[1][1]
*/
//matix
#include<stdio.h>

int main(){
    int mark[2][3]; 
    mark[0][0]=98;
    mark[0][1]=89;
    mark[0][2]=67;
    mark[1][0]=99;
    mark[1][1]=93;
    mark[1][2]=95;

    printf("%d\n",mark[1][2]);
    return 0;

}