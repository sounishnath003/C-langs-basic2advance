#include<stdio.h>
#include <stdlib.h>
void work();
void start();

int main()

    {
     start();
    return 0;
}
void start()
{
    system("cls");
    system("COLOR 3F");
   int option;
    printf("welcome\n");

    scanf("%d",&option);
    switch(option)
    {

    case 1:
        work();
        break;
    default:
        printf("Error!! invail input");
        break;

    }

}

void work()
{
    system("cls");

    int sounish[200],oLoop,iLoop,swap;
    int n;
    system("color 5F");

    printf("\t enter the number of elements : ");
    scanf("%d",&n);
   // printf("\t Put Here Your Desired Number : \n ",n);
    for(oLoop = 0 ; oLoop <= n-1; oLoop++)
    {
        scanf("%d", &sounish[oLoop]);
    }

    for (oLoop = 0; oLoop <= n-1; oLoop++)
    {
        for (iLoop = 0; iLoop <= n-oLoop-1; iLoop++)
        {
            if(sounish[iLoop] > sounish[iLoop + 1])
            {


                swap = sounish[iLoop];
                sounish[iLoop] = sounish[iLoop + 1];
                sounish[iLoop + 1] = swap;
            }
            }
           }

           printf("\n The Sorted List Is Drawn Here : \n");
           for(oLoop = 0; oLoop <= n-1; oLoop++)
           {
                printf("%d\n", sounish[oLoop]);

           }

}
