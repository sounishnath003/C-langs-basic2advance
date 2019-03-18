#include "stdio.h"
#include "conio.h"
void main()
{
int number,result;
scanf("%d", &number);
//now..check the numbers are even orr odd
 {

  result=number%2;
    if (result==0)
       printf("the number is even:",number);
          else //the anti conditioner
      printf("the number is odd: %d",number);
   getch();
       }

}
