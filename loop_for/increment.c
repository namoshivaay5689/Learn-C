/*
increment
    i++ means first use i then increment
    ++i means first increment then use
*/
#include <stdio.h>

int main(){
   int i=1;
   printf("We are using i++\n");
   printf("%d\n",i++);
   int n=1;
   printf("We are using ++n\n");
   printf("%d\n",++n);
}