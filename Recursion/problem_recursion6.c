//Print the percent of subjects
#include<stdio.h>

int percent(int math ,int hindi ,int science);

int main(){
    float per=percent(34,56,34);
    printf("%f",per);
}

int percent(int math ,int hindi ,int science){
    float percent=((math+hindi+science)/3);
    return percent;
}