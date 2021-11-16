#include <stdio.h>

int main()
{
    int a, m, j, h, min, s;
    int annee;
    printf("entrer annee");
    scanf("%d",&a);
    j=a*365;
    m=a*12;
    h=a*24;
    min=h*60;
    s=min*60;
    printf("j est :%d\n",j);
    printf("m est :%d\n",m);
    printf("h est :%d\n",h);
    printf("min est :%d\n",min);
    printf("s est :%d\n",s);

    
    
    



    return 0;
}