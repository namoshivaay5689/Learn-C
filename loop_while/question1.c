//Print the number from 0 to n , if n is given by the user
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number from where you want to print \n");
    scanf("%d",&n);
    int i=0;
    while(i<= n) {
        printf(" %d ",i);
        i++;
    }
    return 0;
}