#include <stdio.h>
#include <math.h>

int main()
{ 
    int a, b, c, d;
    float s, s1, s2, s3;
    printf("entrer a, b, c");
    scanf("%d%d%d",&a, &b, &c);
    if(a=0)
    if(b=0)
    if(c=0)
    printf("la solution est R\n");
    else /*c#0*/
    printf("pas de solution\n");
    else /*b#0*/
    {
        s=-b/c;
        printf("solution est :%f",s);
    }
    else /*a#0*/
    {
        d=b*b-4*a*c;
        if(d==0)
        {
            s1=-b/2*a;
            printf("solution est:%f",s1);

        }
        else 
        if(d>0)
        {
            s2=(-b+sqrt(d))/(2*a);
            s3=(-b-sqrt(d))/(2*a);
            printf("les solutions est :%f%f\n",s2,s3);
        }
        else /*d<0*/
        printf ("impossible\n");
    }
    
    



    return 0;
}