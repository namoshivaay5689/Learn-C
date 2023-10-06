//write two function one for  print hello and another  to print goodbye
#include<stdio.h>

void printhello();
void printgoodbye();

int main(){
    //the function first written will be executed first
    printhello();
    printgoodbye();
    return 0;
}
void printhello(){
    printf("Hello!\n");
}

void printgoodbye(){
    printf("Good Bye!\n");
}