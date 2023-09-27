#include <stdio.h>

int main(){
    int age;
    printf("Enter the age of the person : \n");
    scanf("%d",&age);
    if(age >18){
        printf("The persson is adult\n");
    }
    else{
        printf("The person is not adult \n");
    }
    return 0;
}