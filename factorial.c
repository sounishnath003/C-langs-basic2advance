
#include<stdio.h>
#include<conio.h>
void main()
{
  int number,i;
  long long factorial=1;
printf(" give the number of the integer number");
scanf("%d",&number);


  if (number<0)
    {
      printf("the factorial of the negetive numbefr isn't possible");
      }

      else //this is the main function that calculates the factorial of the interger numbers

      //now,...

      if (number>=0)
  {
      for (i=1;i<=number;i++)

      {
        factorial*=i;
      }

  printf("%d",factorial);
}
getch();
}
