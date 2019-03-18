#include "stdio.h"
#include "conio.h"
void main()

{
  int numb,check,rem,sum=0;
  scanf("%d", &numb);
  check=numb;
  while (check!=0)
  {rem=check%10;
  sum=sum+(rem*rem*rem);
check=check/10;
}
if (sum==numb)
printf("%d \t armstorng number::::");
else
printf("%d \t not armstrng number",numb);
getch();
}
