#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float f(float x, float y){
    return x*x+y*y;
}
int main()
{
    float x, y, h ,xn, k1, k2, k;
    printf("x, y, h, xn -->");
    scanf("%f,%f,%f,%f", &x, &y,&h, &xn);
    float x0 = x;
    float y0 = y;
    printf("X \t Y \n");
    while(x0<=xn){
            printf(" %f\t%f\n", x0,y0);
        k1 = h*f(x0,y0);
        k2 = h*f(x0+h, y0+k1);
        k =(k1+k2)/2;
        y0 = y0 + k;
        x0 = x0+h;
    }
    return 0;
}
