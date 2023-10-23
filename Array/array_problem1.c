#include <stdio.h>

int count(int*arr,int n);

int main(){
    int arr[]={1,2,3,4,5,4,6,6};
    printf("%d",count(arr,8));
    return 0;

}

int count(int*arr,int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}