#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[9]={1,2,4,5,6,7,8,9};
    int val, pos;
    printf("ENTER THE VALUE AND POSITION RESPECTIVELY");
    scanf("%d%d",&val,&pos);
    for (int a=7 ; a>=pos  ; a--)
    {
        array[a+1] = array[a];
    }
    array[pos]=val;

    for (int a=0 ; a<9 ; a++)
    {
        printf("%d",array[a]);
    }


    return 0;
}
