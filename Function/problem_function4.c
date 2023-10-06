//Use library function to calculate the square of number by user

#include<stdio.h>
#include<math.h>

void mul_libraray(int n);

int main(){
    int n;
    printf("Enter the number whose square :\n",n);
    scanf("%d",&n);
    mul_libraray(n);
}
void mul_libraray(int n){

    float square=pow(n,2);
    printf("%f",square);
}

