#include <stdio.h>

int main(){

int mark;
printf("Enter the marks of student\n:");
scanf("%d",&mark);

if(mark>=0 && mark <=30){
    printf("Fail\n");
}
else if(mark >=30 && mark <=60){
    printf("pass with second division");
}
else if(mark>=60){
    printf("first division pass");
}
else{
    printf("Wrong number");
}

}