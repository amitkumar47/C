#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[101];
    for (int a=0 ;a<=100 ; a++)
    {
        array[a]=a;

    }
    for (int b=2 ; b<100 ; b++)
    {
        for (int c=b ; c<=100; c+=b)
        {
           if (c!=b)
           array[c]=0;

        }
    }
    for (int d=0 ;d<100 ; d++)
    {
        if (array[d]!=0)
        printf("%d\n",array[d]);
    }
    return 0;
}
