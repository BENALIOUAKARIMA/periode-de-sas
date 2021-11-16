#include <stdio.h>

int main()
{
     int x;
    printf(" entrer x");
    scanf("%d",&x);
    if(x>0)
    printf("x est positif:%d\n",x);
    else
    if(x<0)
    printf("x est negatif:%d\n",x);
    else
    printf("x est nul\n");
   
    printf("Hello World");

    return 0;
}