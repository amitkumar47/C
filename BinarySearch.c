#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int a;
    int low=0,high=8, pos=-1,mid,value;

    printf("ENTER THE VALUE THAT IS TO BE SEARCHED\n");
    scanf("%d",&value);
    for(a=0 ; low<=high ; a++)
        {mid= (low +high)/2;
        if (arr[mid]<value)
            low=mid+1;
        else if (arr[mid]>value)
            high=mid-1;
        else
           {
                pos=mid;
                break;
           }
        }
        printf("%d",pos);
    return 0;
}
