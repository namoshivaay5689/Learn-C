#include <stdio.h>

int main(){
    int length;
    int breath;
    printf("Enter the length of rectangle\n");
    scanf("%d",&length);
    printf("Enter the breath of rectangle\n");
    scanf("%d",&breath);

    int parameter=2*(length+breath);
    printf("The parameter of rectangle :%d",parameter);
    return 0;
}