#include<stdio.h>

void matrix(int arr[2][10],int n,int num);

int main(){
    int arr[2][10];
    matrix(arr,0,2);
    matrix(arr,1,3);
    for(int i=0;i<10;i++){
        printf("%d\t",arr[0][i]);
    }
    printf("\n");
for(int i=0;i<10;i++){
        printf("%d\t",arr[1][i]);
    }

}
void matrix(int arr[2][10],int n,int num){
    for(int i=0;i<10;i++){
        arr[n][i]=num*(i+1);
    }
}