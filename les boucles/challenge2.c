#include <stdio.h>

int main()
{
    int l, s, t,i ;
    printf("entrer le nombre de ligne:");
    scanf("%d",&l);
    for(i=1; i<=l; i++)
    {
        for(s=0; s<l-i; s++)
             printf(" ");
        for(t=0; t<(i*2)-1; t++)
             printf("*");
          printf("\n");
    }


    return 0;
}
