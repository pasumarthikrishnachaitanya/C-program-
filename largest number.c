#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("enter  a,b,c:");
    scanf ("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf ("a is largest");
        }
    }
    else if(b>c)
    {
        printf ("b is largest ");
    }
    else 
    {
        printf ("c is largest");
    }
    return 0;
}
