//Write a program to convert celsius to fahernheit
//f=(c*9/5)+32
#include <stdio.h>
float convertTemp(float celsius);

int main(){
    float n;
    printf("Enter the value is celsius: \n");
    scanf("%f",&n);
    float far=convertTemp(n);
    printf("Here the farenheit: \n%f",far);
    return 0;
}

float convertTemp(float celsius){
    float far=(celsius*9/5)+32;
    return far;
}