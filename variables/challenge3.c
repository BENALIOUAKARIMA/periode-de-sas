#include <stdio.h>

int main()
{
    float metre, km, mile;
    printf("entrer la distance en metre");
    scanf("%f",&metre);
    km = metre / 1000;
    printf("le km qui affiche c'est : %f", km);
    mile = km * 1.609;
    printf("la miles c'est :%f",mile);
    return 0;

}