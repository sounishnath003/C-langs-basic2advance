#include <stdio.h>
#include <stdlib.h>
float f(float x){
    return 1/(1+x);
}
float simpon_rule(float upper_bound, float lower_bound, int inverval){
float res = 0;
float h = (upper_bound - lower_bound)/inverval;
float x[30]; float fx[30];
for(int i = 0; i<=inverval;i++){
    x[i] = lower_bound + i*h;
    fx[i] = f(x[i]);
}
for(int i = 0; i<=inverval; i++){
    if(i == 0 || i == inverval){
        res += fx[i];
    }else if (i % 2 != 0){
        res += 2*fx[i];
    }
    else {
        res += 4*fx[i];
    }
}
res =res * (h/3);
printf("%f ", res) ;
}
int main()
{
  float lower_bound = 0;
  float upper_bound = 1;
  int interval = 6;
  simpon_rule(upper_bound, lower_bound, interval);
}
