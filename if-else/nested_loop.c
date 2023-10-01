#include <stdio.h>

int main(){
    int num;
    printf("Enter the number to check \n:");
    scanf("%d",&num);
    if(num>=0){
        printf(" positive number\n");
        if(num%2==0){
            printf("The number is even");
        }
        else{
            printf("The number is odd");
        }
    }
    else{
        printf("negative number\n");
    }
}