//Sum of the first n number

#include <stdio.h>

int print_sum(int n);

int main(){
    int n;
    printf("Enter the number from where you want to add:\n");
    scanf("%d",&n);
    int res=print_sum(n);
    printf("%d",res);
}

int print_sum(int n){
    if(n==1){
        return 1;
    }
    int sum1=print_sum(n-1);
    int sum=sum1+n;
    return sum;
}
/*
sum(1)=1;

sum(2)=1+2=3;

sum(3)=sum(2)+3=3+3=6;

sum(4)=sum(3)+4=6+4=10;

sum(5)=sum(4)+5=10+5=15;
*/



