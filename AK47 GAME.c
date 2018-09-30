#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("HELLO GAMERS, WELCOME TO THE AK47 WARRIOR.\n\nRULES:- \nINITIALLY, THERE IS A MATRIX OF 10 ROWS AND 10 COLUMN. \nINITIALLY YOU HAVE TO CHOOSE 5 POINTS AND THE PC WILL ALSO CHOOSE THEN\nYOU HAVE TO JUST PREDICT THE PC POINT AND PC WILL PREDICT YOUR\nWHOEVER PREDICT ALL THE 5 POINTS OF OTHER WILL WIN THE GAME.\n");
    int arr[10][10];
    int a,b,x,y,d,e;
    for(a=0 ; a<10 ; a++)
    {
        for (b=0 ;b<10  ; b++)
            arr[a][b]=0;                         //all elements of array has 0 value        }
    }
    for(a=0 ; a<5 ; a++)
    {
        arr[rand()%10][rand()%10]=1;              //elements choosen by pv has the value 1
    }
    again:
    printf("ENTER THE 5 NUMBERS\n");                //user choosing the value
    for(b=0; b<5 ; b++)
    {

        printf("enter the x cordinate :");
        scanf("%d",&x);
        printf("enter the y cordinate :");
        scanf("%d",&y);
        if (x>=0 && x<10 && y>=0 && y<10)
            arr[x][y]=2;                              //elements entered by user has value 2
        else
        {
            printf("the coordinate are out of range\n");
            goto again;
        }
    }

    print(arr);
    for (a=0 ; a<50 ; a++)
    {    loopagain:
         printf("enter the x cordinate :");
         scanf("%d",&x);
         printf("enter the y cordinate :");
         scanf("%d",&y);
         if (x>=0 && x<10 && y>=0 && y<10)
         {
            if (arr[x][y]==1)
            {   arr[x][y]=2;

                printf("BOOM, YOU FOUND THE PC NUMBER\n");

             }
            else if (arr[x][y]==0)
              {   arr[x][y]=3;

                 printf("BETTER LUCK NEXT TIME\n");

              }
              else if(arr[x][y]==2)
              {
                  arr[x][y]=3;
                  printf("SAD,YOU ENTERED YOUR COORDINATES\n");
              }
        }

        else
        {
            printf("the coordinate are out of range\n");
            goto loopagain;
        }

        int g,h;
        g=rand()%10;
        h=rand()%10;


         {
             if (arr[g][h]==2)
            {   arr[g][h]=3;
                 print(arr);
                printf("PC NAILS THIS TIME\n");


            }
             else if (arr[g][h]==1)
            {   arr[g][h]=3;
                 print(arr);
                printf("PC ENTERED HIS OWN COORDINATES\n");


            }
            else if (arr[g][h]==0)
              {  arr[g][h]=3;
                     print(arr);
                 printf("PC ,TUMSE NAA HO PAYEGA\n");


              }
         }

         int e=0,f=0;
        for(a=0 ; a<10 ; a++)
        {
            for (b=0 ;b<10  ; b++)
            {
                if (arr[a][b]==1)
                e++;
                else if (arr[a][b]==2)
                f++;
            }                        //all elements of array has 0 value        }
        }
        if (e==0)
           {
             printf("HURRAH, YOU WON THE BATTELE");
             break;
           }
        else if (f==0)
           {
             printf("PC, WON THE BATTLE");
             break;
           }


    }

    return 0;
}
int print(int arr[][10])
{
    int a,b;
    printf("\n\n\n\n\nHELLO GAMERS , WELCOME TO THE AK47 WARRIOR\n");
    for(a=0 ; a<10 ; a++)
    {   if (a!=-1)
        printf("%d",a);
        for (b=1 ;b<10  ; b++)
        {
            if (a==0)
                printf(" %d ",b);
            else if (arr[a][b]==0)
                printf("   ");
             else if (arr[a][b]==2)
                printf(" * ");
            else if (arr[a][b]==3)
                printf(" - ");
        }
        printf("\n",a);

    }
    return 0;
}
