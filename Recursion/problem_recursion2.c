//Another way for recursive
#include<stdio.h>

int print_sum(int n);

int main(){
    printf("%d",print_sum(5));

}

int print_sum(int n){
    if(n>0){
        //5+print_sum(4)
        return n+print_sum(n-1);
    }else{
        return 0;
    }
}