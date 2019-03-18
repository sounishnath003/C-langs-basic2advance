#include<stdio.h>
int gcd(int, int);

int main()
{

    int num1,num2;
    scanf("%d%d", &num1,&num2);
    printf("%d", gcd(num1,num2));
    return 0;
}

int gcd(int num1, int num2){
    int r;
    r = num1%num2;
    if(r == 0){
        return num2;
    }
    else
    {
        return 1;
        /*return gcd(num2, r);*/
    }
}
