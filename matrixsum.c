#include "stdio.h" // this is the standard input output sys.
#include "conio.h"
#include "math.h" // this header for any mathematical calcultaion
  void main()
    {
      int array1[2][2],array2[2][2],sum[2][2]; //array func() :
      int i,j;//i & j is the logical dor loop oparator!
      printf("PROGRAM FOR OUTPUT THE MATRX SUM");
      //THIS PROGRAM WILL CALCULATE THE SUM OR THE ADDITION OF THE MATRIX
       //FOR THE array1 MATRIX::
       printf("\nelements of the array1 matrix\n");
       for (i=0;i<=2;i++)
          {
            for (j=0;j<=2;j++)
            scanf ("%d",&array1[i][j]);
          }
      printf(" the elements that u have input are::%d",array1[i][j]);

      // the first input array1 is completed!!

//this is the next array2 matrix section!!
          printf("\nelements of the array2 matrix\n");
          for (i=0;i<=2;i++)
        {
          for (j=0;j<=2;j++)
          scanf ("%d",&array2[i][j]);
        }
        printf(" th elements that u have input are::  \t%d",array2[i][j]);
        //the array2 section input has been com pleted here!

// make the third condition to addition the number!
          printf("\nthis section is the calculation part \n");
            for(i=0;i<=2;i++)
          {
            for (j=0;j<=2;j++)
            //here make the logic for 6476u747!0n
            sum[i][j]=array1[i][j]+array2[i][j];
            }
      printf(" your answers is \n");
      //logically it has been done! hey!!
                for(i=0;i<=2;i++)
   {
                for(j=0;j<=i;j++)
                printf("%d",sum[i][j]);
   }
    printf(" \n"); //make the output looks great by new line arragement!
        getch();
    }
