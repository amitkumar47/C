#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[3][7]={{1,2,3,4,5,6,7 },
                    {5,7,8,9,0,5,6},
                    {6,7,8,9,0,5,6}};
    printf("%d\n%d\n%d\n",**(arr +3),(arr +5),arr[1][6]);

    return 0;
}
