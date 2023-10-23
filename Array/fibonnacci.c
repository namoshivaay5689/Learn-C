//write a program to store the first  n fibonacci number
// 0 1 1 2 3 4 8 
#include<stdio.h>


int main(){
    int n;//how many n numbers are required
    printf("Enter n: ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t",fib[0]);
    printf("%d\t",fib[1]);
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    return 0;

}