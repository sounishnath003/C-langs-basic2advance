#include "stdio.h"
#include "conio.h"
  void main()
  {
    int sub[5],i,zero=0,total,n;
    float avaege;
    printf(" %d\t\n this is a somple array program thta contains marks");
          for(i=0;i<5;i++)
            {
               printf("\nENTER THE VALUE INPUT");
              scanf(" %d\t give the input",&sub[i]);
              zero=zero+sub[i];
            }
            printf("%d\n",zero);
    for(i=0;i<5;i++)
      {
        printf("%d\n",sub[i]);
        }
        printf("the total value %d",zero);
avaege=zero/5;
printf("\npercent%.2lf",avaege);
  getch();
}
