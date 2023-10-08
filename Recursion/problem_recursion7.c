//fibonacci series

/*

The Fibonacci sequence is given by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.
0 + 1 + 1 + 2 each number is sum of two previous number
fb(n)=fb(n-1)+fb(n-2)

*/
#include<stdio.h>

int fib(int num);

int main(){
   printf("%d   ",fib(6));
    return 0;
}

int fib(int num){

        if(num==0){
            return 0;
        }
        if(num==1){
            return 1;
        }
    int fibN1=fib(num-1);
    int fibN2=fib(num-2);
    int fibN=fibN1+fibN2;
    //printf("fib of %d is : %d \n ",num,fibN);
    return fibN;
}
