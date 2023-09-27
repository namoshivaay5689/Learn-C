#include <stdio.h>
#include <math.h>//in arthematic problem we will use include <math.h>

int main(){
    int a;
    printf("enter the number whose power you need\n");
    scanf("%d",&a);

    int b;
    printf("write the power\n");
    scanf("%d",&b);

    int res=pow(a,b);//to wite a^b then we will use pow(a,b)
    printf("The answer after power %d",res);
    return 0;
}