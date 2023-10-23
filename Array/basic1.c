//write a program to enter price of 3 items & print their final cost with GST.

#include<stdio.h>
float main(){

float price[3];

for(int i=0;i<3;i++){
    printf("Enter the price of products\n");
    scanf("%f",&price[i]);
}
for(int i=0;i<3;i++){
    printf("The price after including GST\n");
    float cost=price[i]*0.18+price[i];
    printf("%f\n",cost);
}

}
