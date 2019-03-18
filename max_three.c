#include "stdio.h"
#include "conio.h"
void main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("checking which is the maximum among these");
  if (a>b && a>c) //check this condition
  printf("the maximum is: %d",a);

  else //also check this
        {
          if(b>c && b>a)
      printf("the maximum is: %d",b);
        }

   {
     if(c>a && c>b)
     printf("the maximum is: %d",c);
     }

  getch();
}
