#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float f(float x){
return sqrt(1+pow(x,2)) ;
}
float trap_func(float x, float xn, int n){
//float y0 = f(x); float yn = f(xn);
float y = float f(x) + float f(xn);
float h = (xn-x)/n;
float s;
int i= 1;
while(i<n){
    y = y+ 2*(f(x+i*h));
    i++;
}
y = y*(h/2);
printf("\n %f", y) ;
}
int main()
{
  float x,xn;
  int n;
  printf("Enter the value x0, xn, n -->");
  scanf("%f%f%d", &x, &xn, &n);
  trap_func(x,xn,n);
  return 0;
}
