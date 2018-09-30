#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for(a=2 ; a<101 ; a++)
    {
        for (b=2  ; b<a  ; b++)
        {
            if (a%b==0)
                break;
            else
                printf("%d\n",a);
            break;

        }
    }   getch();
}









