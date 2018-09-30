#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n;
    printf("ENTER THE NUMBER=");
    scanf("%d",&n);
    a=n;
    fancy(n,a);

 return 0;
}

void fancy(int n,int a)
{
    if (n==-1)
    {
        n+=3;
        fancy(n,a);
    }
    else if (n%2==1)
    {
            printf("%d\n",n);
            fancy(n-2,a);
    }
    else
    {
         if(n<a)
        {
            printf("%d\n",n);
            fancy(n+2,a);
        }
    }
return 0;
}
