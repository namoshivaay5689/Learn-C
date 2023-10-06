//write a program  that prints Namaste when user is indian and bonjour if the user is french
#include <stdio.h>

void namaste();
void bounjor();
int main(){
    char n;
    printf("select your nation if indian write 'I' and if french write 'F'\n");
    scanf("%c",&n);
    if(n=='I'){ 
    namaste();
    }
    if(n=='F'){ 
    bounjor();
    }
}
void namaste(){
    printf("Namaste\n");
}
void bounjor(){
    printf("Bounjor\n");
}
