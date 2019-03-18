#include <stdio.h>
#include <conio.h>
void main()

{
  int days,month,year,month_1,days_1,year_1_365,days_2,year_2_365,rem,rem_1;
  printf(" %d input the days");
  scanf (" %d \t\n days",&days);
  while(days!=0)
    if (days>30 && days<=365)

    {
      month=days/30;
      days_1=days%30;
      printf ("\t\n%d days= %d months and %d days",days,month,days_1);
      printf(" \n your output is on the screen");
    }
else     //check this

      if(days<30)
      {
        printf(" %d\n days", days);
      }
          //checking another resulted condition

      else //conditions

        if(days>365)

      {
        year_1_365=days/365;
        year_2_365=days%365;

          if (year_2_365>30)
          {
            rem=year_2_365/30;
            rem_1=year_2_365%30;
          }
            printf(" %d\n days = %d year and %d days",days,year_1_365,rem,rem_1);
        }

  getch();
}
