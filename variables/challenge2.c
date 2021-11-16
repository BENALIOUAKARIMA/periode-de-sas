#include <stdio.h>
#include <stdlib.h>
int main(){
    float celisus, fahrenheit;
    printf("entrer la température en fahenheit:");
    scanf("%f",&fahrenheit);
    celisus=(fahrenheit-32)/1.8;
    printf("%f",celisus);
    return(0);


}
