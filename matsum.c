/*  C PROGRAM:-
TO CALCULATEE THE MATRIX SUM OF ADDTION:
BY THIS ODER U ALSO AND A SUBSTARCTION FORMULA:*/
// Carry forward to the program very easily::!

#include <stdio.h> //this is for bsic input output system.


int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
//here; where m=rows;n=columns; c & d respectivly are the components of i and j in for loop system!!

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   // first matrix elements are inputed in this section:-
   printf("Enter the elements of first matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

         //second matrix input section:-
   printf("Enter the elements of second matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
//sum of the condition which is the responsible to the program
   printf("Sum of entered matrices:-\n");

   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++)
      {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
