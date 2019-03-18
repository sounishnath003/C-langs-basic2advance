/* Bubble sort code */

#include <stdio.h>
#include  <stdlib.h>
int main()
{
  int array[100], noOfElnoOfEments, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &noOfElnoOfEments);

  printf("Enter %d integers\n", noOfElnoOfEments);

  for (c = 0; c < noOfElnoOfEments; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < ( noOfElnoOfEments - 1 ); c++)
  {
    for (d = 0 ; d < noOfElnoOfEments - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for ( c = 0 ; c < noOfElnoOfEments ; c++ )
     printf("%d\n", array[c]);
     system("pause");

  return 0;
}
