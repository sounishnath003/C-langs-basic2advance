#include "stdio.h"
#include "conio.h"
void main()
{
  int row,colum,space,n;
  printf("enter number of rows = n \n");
  scanf("%d",n);
    for(row=1;row<=n;row++)
    {
      for (space=1;space<=n-row;space++)
      printf(" ");
      for(colum=1;colum<=(2*row)-1;colum++)
      printf("*");ssssad
      printf("\n");
    }
    for (row=n-1;row>=1;row--)
        {
          for (space=1;space<=n-row;space++)
          printf(" ");
          for(colum=1;colum<=(2*row)-1;colum++)
          printf("*");
          printf("\n");
        }
  getch();
}
