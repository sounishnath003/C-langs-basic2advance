#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
    {
      int a,b,c, determinate,root1,root2,realpart,imaginaryPart;
      printf("ENTER THE COEFFICENT a,b,c:\n");
      scanf("%lf %lf %lf\n",&a,&b,&c);

      determinate=b*b-4*a*c;
    // conditiion for real and different roots:
        if (determinate>0)
        {
      //sqrt() function returns square roots
      root1 = (-b+sqrt(determinate))/(2*a);
      root2 = (-b-sqrt(determinate))/(2*a);

          printf ("root1 = %.2lf and root2 = %.2lf",root1,root2);
        }
        //condition  for realand equal roots:
        else
              if(determinate==0)
              {
                root1 = root2 = (-b/(2*a));
                printf("root1 = %.2lf = root2", root1);

              }
//if roots are not real number:
else
{
  realpart = -b/(2*a);
  imaginaryPart = sqrt(determinate)/(2*a);
  printf("%.2lf+%.2lfi = root1 and root2 = %.2f-%.2fi",realpart,imaginaryPart,realpart,imaginaryPart);
  }

  getch();

    }
