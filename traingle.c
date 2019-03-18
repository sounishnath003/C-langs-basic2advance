#include "stdio.h"
#include "conio.h"
      void main()

      {
          int i,j;
          printf(" \t the FLOYD'S triangle");

          for(i=0;i<=5;i++)

             for(j=1;j<=i;j++)


           if ((i+j)%2==0)
           {
             printf("1");
           }
         else
              {
                printf("0");
            }
    getch();
      }
