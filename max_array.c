#include "stdio.h"
#include "conio.h"
  void main()
   {
     int keya[5],i,value=0,maximum,n;
     printf("HEY!! MATE WHAT'S UP??\n MAKE A HAPPY CODING");
        //this loop makes you enable to input with ease:
        for (i=0;i<5;i++)
          {
            printf("\n THATS MAKE YOU ENABLE TO DO THE IN[PUT]");
            scanf("%d",&keya[i]);

          }
          //this is  the output section:
        printf("the values are");
        for(i=0;i<5;i++)
        {
             printf("the values is = %d\t",keya[i]);
         }
       // the main() theme of the program calculate the maximum in the input:
       printf("cheking the maximum number\n");
       {
         maximum=keya[0];
         {
            if(maximum<keya[i])
              maximum=keya[i];
            }
            }
    printf(" THE maximum VALUE IN THIS INPUT IS\t %d",maximum);

       getch();

   }
