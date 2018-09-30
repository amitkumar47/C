#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d,e,f,n;
   scanf("%d",&n);
   for(a=1; a<=2*n+1 ; a++)
   {
       if(a==1 || a==2*n+1)
           for(b=1 ; b<=2*n+1 ; b++)
       {
           printf("#");
       }
       else if (a%2==0)
       {
           printf("#");
           for(c=1 ; c<=a-1 ; c++)
           {
                printf(" ");
           }
           printf("#");
           for(d=1 ; d<=n-a/2 ; d++)
           {
               printf(" #");
           }

       }
       else
       {
           for(e=1 ;  e<=a  ; e++)
                printf("#");
           for(f=1 ;  f<= n-(a-1)/2  ; f++ )
                printf(" #");
       }
       printf("\n");
   }
    return 0;
}
