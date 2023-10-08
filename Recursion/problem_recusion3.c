//Factorial  with out recursion
#include<stdio.h>


int main(){
    printf("Enter the number whose factorial\n:");
    int n;
    int fac=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fac=fac*i;
    }
    printf("%d\n",fac);
}
