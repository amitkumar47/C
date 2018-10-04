#include <stdio.h>
#include <stdlib.h>

int main()
{   int size;
    printf("enter the size");
    scanf("%d",&size);
    int a,array[size];

    for (a=0 ; a<size ; a++)
    {
        scanf("%d",&array[a]);
    }

    for (a=0 ; a<size ; a++)
    {
        printf("%d\n",array[a]);
    }

    return 0;
}

