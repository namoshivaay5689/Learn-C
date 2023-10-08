//Factorial
#include<stdio.h>

int fac_num(int n);

int main(){
    printf("%d",fac_num(5));
}

int fac_num(int n){
    if(n==0){  //factorial of 0 is 1
        return 1;
    }
    else{
        return (n*fac_num(n-1));
    }
}