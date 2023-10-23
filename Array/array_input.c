//Taking input for array
#include <stdio.h>

int main(){
    int aadhar[5];
    //input
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index : ",i);
        scanf("%d",(ptr++));//ptr=0 
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d value is : %d\n ", i , aadhar[i]);
    }
    return 0;
}