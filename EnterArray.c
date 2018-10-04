#include <stdio.h>
#include <stdlib.h>

int main() //insert elements in an array of size 8
{
   int array[8];
   for (int a=0 ; a<8 ; a++)
   {
       scanf("%d",&array[a]);
   }
   for (int a=0 ; a<8 ; a++)
   {
       printf("%d",array[a]);
   }
    return 0;
}
