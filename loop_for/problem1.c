//Print the table of a number  input by the user
#include <stdio.h>

int main(){
    int num;
    printf("For Which number you Want Table\n");
    scanf("%d",&num);
    int temp;
    for(int i=1;i<=10;i++){
        temp=i*num;
        printf("%d\n",temp);
}
    }
    