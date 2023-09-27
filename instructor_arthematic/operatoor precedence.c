/*
we will see which operator will perform first
    we will slove bracket first

    *,/,%   first priority

    +,-     second priority

    =       third priority

*/
/*
x=4+9*10
x=4+90
x=94


y=4*3/6*2       here we use left to right
y=12/6*2
y=2*2
y=4

*/
#include <stdio.h>
#include <math.h>

int main(){
    int a =4 * 3 / 6 * 2 ;
    printf("%d\n",a);
    return 0;


}