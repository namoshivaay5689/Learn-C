//Print the sum of first n  Natural NUmber...Also print them in reverse
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number from where to where you want to add\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    // reverse
    for(int i=n;i>=1;i--){
        printf("%d ",i);
    }

}