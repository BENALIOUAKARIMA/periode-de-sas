#include <stdio.h>

int main()
{
    float c, f;
    printf("entrer la temerature en fahrenheit ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("c est:%f\n",c);
    if (c = 3)
    printf("la sensation rassentie est tres froid\n");
    else
    if (c =15)
    printf("la sensation rassentie est froid\n");
    else
    if (c =25)
    printf("la sensation rassentie est chaud\n");
    else
    printf("la sensation rassentie est tres chaud");




    return 0;




}