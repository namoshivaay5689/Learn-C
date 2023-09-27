//find out all armstrong numbers in a given range 0 to 1000
/*
armstrong number means if we cube the number digit separately then its equal to original number


*/
# include <stdio.h>

int main(){
    int temp,dig1,dig2,dig3;
    for (int i=1;i<=1000;i++){
        if(i<=9){
            printf("%d\n",i);
        }
        else{
            dig1=i%10;
            dig2=(i%100-dig1)/10;
            dig3=(i%1000-dig2)/100;
            temp=(dig1*dig1*dig1)+(dig2*dig2*dig2)+(dig3*dig3*dig3);
            if(temp==i){
                printf("%d\n",temp);
            }
        }
    }

}