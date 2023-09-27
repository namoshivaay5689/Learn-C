//reverse the number 
/*
suppose the number is 354
    rev=0;
    354%10=4(4 is stored in temp)
    354/10=35.4 so 35 is new number
    rev=rev*10+temp(0*10+4)
*/
#include <stdio.h>

int rev(int n){
    int temp=0;
    int sum=0;
    while(n!=0){
        temp=n%10;
        n=n/10;
        sum=sum*10+temp;
    }
    return sum;
}
int main(){
   int n;
   printf("Enter the number tlo reverse\n");
   scanf("%d",&n);
   int num=rev(n);
   printf("%d",num);
}