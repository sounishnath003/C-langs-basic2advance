#include <stdio.h>
#include <stdlib.h>
void start();
void menu();
void ascending();
void descending();
int op;
int i,loop,arr[10],n,temp;
int main()
{
    start();
    return 0;
}
void start()
{
    menu();
}

void menu()
{
    system("COLOR 5F");
    printf("\t\t****WELCOME To 'Sorting an Array using Bubble-Sort Technique'****\n\n");
    printf("\t Press [1] to Sort the Array in Ascending Order \n");
    printf("\t Press [2] to Sort the Array in Descending Order \n");
    //printf("\n [1].Make Ascending order \t [2].Make Descending order \n");
    printf("\n Enter Your Choice..");
    scanf("%d",&op);

    switch(op)
    {
      case 1:
      ascending();
      break;

      case 2:
      descending();
      break;

      default:
      printf("Invalid input..\n");
      break;
    }

}

void ascending()
{
    system("cls");
    system("COLOR 4F");
    printf("Enter The no. of elements you want to enter..\n");
    scanf("%d",&n);
    printf("Enter %d elements into the Array..\n",n);
    //printf("**Please don't enter same value..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    for(loop=0;loop<n;loop++)
    {
        for(i=0;i<n-loop-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
              temp=arr[i+1];
              arr[i+1]=arr[i];
              arr[i]=temp;
            }
        }
    }
    printf("Elements Sorted in Ascending order..\n");
    for(i=0;i<n;i++)
    {

        printf ("%d\n",arr[i]);
    }

}

void descending()
{
    system("cls");
    system("COLOR 3F");
    printf("Enter The no. of elements you want to enter..\n");
    scanf("%d",&n);
    printf("Enter %d elements into the Array..\n",n);
    //printf("**Please don't enter same value..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(loop=0;loop<n;loop++)
    {
        for(i=0;i<n-loop-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
              temp=arr[i+1];
              arr[i+1]=arr[i];
              arr[i]=temp;
            }
        }
    }
    printf("Elements Sorted in Descending order..\n");
    for(i=0;i<n;i++)
    {

        printf("%d \n",arr[i]);
    }
}
