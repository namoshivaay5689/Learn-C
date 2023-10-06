//write a program in which you add 18% GST on product
#include<stdio.h>

void gstprice(float value);

int main(){
    float value;
    printf("Enter the amount of product:\n");
     scanf("%f",&value);
    gstprice(value);
    printf("The original price before GST is: %f \n",value);
    return 0;

}

void gstprice(float value){

    value=value+(0.18*value);
    printf("%f\n",value);

}

