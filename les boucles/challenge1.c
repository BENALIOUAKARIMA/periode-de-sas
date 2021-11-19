#include <stdio.h>

int main()
{
    int x, y;
    int n;
    printf(" entrer la valeur n");
    scanf("%d",&n);
    for(x=0; x<=10;x++){
        y=n*x;
        printf("%d *%d=%d \n",n,x, y);
    }






    return 0;
}