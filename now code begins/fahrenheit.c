#include <stdio.h>

int main(){
    int far;
    printf("Enter the farenheit \n");
    scanf("%d",&far);
    int cal=((far-32)*5)/9;
    printf("the converted value : %f",cal);
    return 0;
}