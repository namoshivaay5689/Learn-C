#include<stdio.h>

int main(){

    int marks[3];//array

    printf("Enter the marks of math \n");
    scanf("%d",&marks[0]);

    printf("Enter the marks of physics\n");
    scanf("%d",&marks[1]);

    printf("Enter the marks of chemistry \n");
    scanf("%d",&marks[2]);

    printf("Thee marks of subject math is %d , physics is %d , chemistry is %d ",marks[0],marks[1],marks[2]);
}