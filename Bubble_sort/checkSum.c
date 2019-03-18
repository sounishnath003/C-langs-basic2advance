//Implementation of 'Bubble-Sort'
//Code in 'C'
  //Live Demo for the CheckSum Project::

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int sounish[200],noOfElements, l1,l2,swapElement;


  printf("\t Give The Numbers Of The Elements\n\n\t");
  //printing the elements for confirmation()
  printf("BE CAREFULL, DON'T INPUT THE SAME VALUES\n\t");
//this will make a  Array scanning function()
printf("\t Enter %d Integer Elements \n ", noOfElements);
scanf("%d", &noOfElements);
printf("\t Enter %d Integer Elements \n ", noOfElements);
for(l1 = 0 ; l1 < noOfElements; l1++)
{
  scanf("\n %d", &sounish[l1]);
}

//this will print the given Inputs By the User()
/* for(outerLoop = 0 ; outerLoop < noOfElements; ++outerLoop)
{
  printf("\n %d", &sounish[outerLoop]);
} */

//Statement FOR CheckSum Of the Program, while we check::>
  for(l1 = 0; l1 < (noOfElements - 1); l1++)
  l1
    for(l2 = 0; l2 < (noOfElements-1) - l1; l2++)
      if(sounish[l2] > sounish[l2] + 1])
      {
        swapElement = sounish[l2];
        sounish[l2] = sounish[l2] + 1];
        sounish[l2 + 1] = swapElement;
      }

  }
    for(l1 = 0; l1 < noOfElements; ++l1)
    {
    printf("\n ::>\t %d", sounish[l1]);
    }
  return 0;
}
