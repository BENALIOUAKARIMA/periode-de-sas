#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2 ,m, n, mn;
    printf("entrer la distance entre duex point ");
    scanf("%f%f%f%f",&x1 ,&x2 ,&y1 ,&y2);
    mn =sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("mn est:%f\n",mn);

    
    


   
    return 0;




}