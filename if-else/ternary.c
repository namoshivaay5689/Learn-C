/*
condition ? doSomething if True : doSomething if False

*/

#include <stdio.h>

int main(){
    int age;
    printf("Enter the age :\n");
    scanf("%d",&age);
        //ternary operator
    age > 18 ? printf("he is adult\n") : printf("he is not adult") ;

    return 0;
}
