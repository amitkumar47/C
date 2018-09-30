#include <stdio.h>
#include <stdlib.h>

int main()
{ int l,b,area ,per;
 printf("enter the length and breadth of rectangle respectively\n");
 scanf("%d%d",&l,&b);
 area=l*b;
     per=2*(l+b);
     if(area>per)
        printf("area is greater =%d",area);
        else
        printf("perimeter is greater =%d",per);
    return 0;
}
