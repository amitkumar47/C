#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,a,b,c;

    scanf("%d",&n);
    for (a=n ; a>0; a-- )
{    { for(b=1; b<=n-a; b++)
           {printf(" ");}  }
    {
        for(c=1;c<=a ;c++)
           {printf("#");}    }

        printf("\n");
}

    return 0;
}
