/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("HELLO GAMES \n THIS TIME , I CAME WITH A TIC TOE GAME\n");
    int row, col;
    int arr[3][3];
    for (row=0 ; row <3  ;row++)
    {
        for (col=0 ;col<3 ; col++)
        {
            arr[row][col]==0;
        }
    }

    print(arr);
    int x,y;
    {
        again:
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

return 0;
}

int print(int arr[][3])
{
    printf("HELLO GAMERS \n THIS TIME , I CAME WITH A TIC TOE GAME\n");
    int row,col;
    for (row=0 ; row <3  ;row++)
    {
        printf("%d",row);
        for (col=0 ;col<3 ; col++)
        {
            if (row==0)
            {
                printf(" %d |",col);
            }
        }
        printf("\n");

    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{

    int arr[3][3];
    int a,b,x,y,d,e,user=10,pc=9;
    for(a=0 ; a<3 ; a++)
    {
        for (b=0 ;b<3  ; b++)
            arr[a][b]=0;                         //all elements of array has 0 value        }
    }
    print(arr);

    for (e=0 ; e<9 ; e++)
    {    loopagain:
         printf("USER 1\nenter the x cordinate :");
         scanf("%d",&x);
         printf("enter the y cordinate :");
         scanf("%d",&y);

         if (x>0 && x<4 && y>0 && y<4)
         {
            arr[x-1][y-1]=1;
         }

        else
        {
            printf("the coordinate are out of range\n");
            goto loopagain;
        }
         print(arr);

          for(a=0 ; a<3 ; a++)
        {
            if (arr[a][0]==arr[a][1] && arr[a][0]==arr[a][2])
            {
                if (arr[a][0]==1)
                {   printf(" USER 1 WON THE BATTLE\n");
                    user=1;
                }
                else if (arr[a][0]==2)
                {    printf(" USER 2 WON THE BATTLE\n");
                    pc=2;
                }

            }
            else if (arr[0][a]==arr[1][a] && arr[0][a]==arr[2][a])
            {
                if (arr[0][a]==1)
                {    printf(" USER 1 WON THE BATTLE\n");
                    user=1;
                }
                else if (arr[0][a]==2)
                {    printf(" USER 2 WON THE BATTLE\n");
                    pc=2;
                }
            }
            else if (arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2])
            {
                 if (arr[0][0]==1)
                {    printf(" USER 1 WON THE BATTLE\n");
                    user=1;
                }
                else if (arr[0][0]==2)
                {    printf(" USER 2 WON THE BATTLE\n");
                    pc=2;
                }
            }
             else if (arr[0][3]==arr[1][2] && arr[0][3]==arr[3][0])
            {
                 if (arr[3][0]==1)
                {    printf(" USER 1 WON THE BATTLE\n");
                    user=1;
                }
                else if (arr[3][0]==2)
                {    printf(" USER 2 WON THE BATTLE\n");
                    pc=2;
                }
            }

        }
         loopagain1:
         printf("USER 2\nenter the x cordinate :");
         scanf("%d",&x);
         printf("enter the y cordinate :");
         scanf("%d",&y);

         if (x>0 && x<4 && y>0 && y<4)
         {
            arr[x-1][y-1]=2;
         }

        else
        {
            printf("the coordinate are out of range\n");
            goto loopagain1;
        }
         print(arr);
      /*  int g,h;
        g=(rand()%3)+1;
        h=(rand()%3)+1;
        arr[g][h]=2;
        print(arr);*/

         for(a=0 ; a<3 ; a++)
        {
            if (arr[a][0]==arr[a][1] && arr[a][0]==arr[a][2])
            {
                if (arr[a][0]==1)
                {   printf("you won the battle");
                    user=1;
                }
                else if (arr[a][0]==2)
                {   printf("PC,WON THE GAME");
                    pc=2;
                }

            }
            else if (arr[0][a]==arr[1][a] && arr[0][a]==arr[2][a])
            {
                if (arr[0][a]==1)
                {   printf("you won the battle");
                    user=1;
                }
                else if (arr[0][a]==2)
                {   printf("PC,WON THE GAME");
                    pc=2;
                }
            }
            else if (arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2])
            {
                 if (arr[0][0]==1)
                {   printf("you won the battle");
                    user=1;
                }
                else if (arr[0][0]==2)
                {   printf("PC,WON THE GAME");
                    pc=2;
                }
            }
             else if (arr[0][3]==arr[1][2] && arr[0][3]==arr[3][0])
            {
                 if (arr[3][0]==1)
                {   printf("you won the battle");
                    user=1;
                }
                else if (arr[3][0]==2)
                {   printf("PC,WON THE GAME");
                    pc=2;
                }
            }

        }
       if (user==1)
            break;
        else if (pc==2)
            break;




}printf("GAME OVER");
return 0;}

int print(int arr[][3])
{
    int a,b;
    printf("\n\n\nHELLO GAMERS , WELCOME TO THE TIC TOE GAME\n");
    for(a=0 ; a<4 ; a++)
    {
        printf("%d",a);
        for (b=1 ;b<4  ; b++)
        {
            if (a==0 && b>0)
                printf(" %d |",b);
            else if (arr[a-1][b-1]==0)
                printf("   |");
             else if (arr[a-1][b-1]==1)
                printf(" * |");
            else if (arr[a-1][b-1]==2)
                printf(" - |");
        }
        printf("\n",a);

    }

    return 0;
}

