#include "stdio.h"
#include "conio.h"
void main()
{
  int gpa;
  printf("give your gpa");
  scanf("%d",&gpa);
  if (gpa>=5)
  {
    printf("you can apply:");
  }
    else //if the user condition is false
  {
    printf("you cannot apply\n");
}
getch();

}
