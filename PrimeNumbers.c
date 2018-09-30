#include <stdio.h>
#include <conio.h>

void main()
{   int a,b,c;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&a);
    for(b=2;b<a;b++){
    c=a%b;
    if (c=0)
        break;

}
if (c=0)
printf("THE NUMBER IS NOT PRIME");
    else
        printf("THE NUMBER IS PRIME");

    getch();
}
