//write a program to check wether the character is digit or not

#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);// for character we use %c
    if(ch>=0 && ch<=9){
        printf("Yes the character is Digit\n");
    }
    else{
        printf("No the character is not a digit\n");
    }
}