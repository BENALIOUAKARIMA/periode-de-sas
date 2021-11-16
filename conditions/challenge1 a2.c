#include <stdio.h>

int main()
{
   float c, f;
    printf("entrer la temerature en f");
    scanf("%f",& f);
    c = (f-32)/1.8;
    printf("c est:%f\n", c);
    if(c =6)
    printf("la sensation ressentie est tres froid\n");
    else
    if(c =20)
    printf("la sensation ressentie est froid\n");
    else 
    if(c =28)
    printf("la sensation ressentie est chaud\n");
    else
    printf("la sensation ressentie est tres chaud\n");



   
    return 0;




}