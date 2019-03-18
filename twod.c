#include "stdio.h"
#include "conio.h"
void main()
{
  int sub [2][3],i,j,total=0;
  printf("ENTER THE 6 VALUES");
  for (i=0;i<2;i++)
      {
        for (j=0;j<3;j++)
          {
            scanf ("%d",&sub[i][j]);
          }
      }
printf(" values are");
      for(i=0;i<2;i++)
      {
      for (j=0;j<3;j++)
      {
        printf("\t%d",sub[i][j]);
        total=total+sub[i][j];
      }
}
printf("\ttyhe output::: %d",total);
getch();
}
