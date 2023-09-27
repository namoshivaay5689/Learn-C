//Write a program divisible by 2

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number to check whether it is divisible by 2\n");
    scanf("%d",&n);
    int r=n%2;
    if(r==0){
        printf("The number is divisible by 2\n");
    }
    else{
        printf("The number is not divisible by2");
    }
}


