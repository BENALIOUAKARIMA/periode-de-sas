#include <stdio.h>

int main()
{
    float mile, km, metre;
    printf("entrer la distance en mile");
    scanf("%f",&mile),
    km = mile/1.609;
    printf("le km affiche c'est:%f", km);
    metre = km * 1000;
    printf("le metre c'est:%f",metre);


    return 0;




}