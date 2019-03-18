#include<stdio.h>
int gcd(int num1, int num2);
int main()
{

    int m,n,a;
    printf(" Enter the number\n");
    scanf("%d%d", &m,&n);
    a=gcd(m,n);
    printf("%d", a);
    return 0;
}

int gcd(int num1, int num2)
{

    int r;
    r = num1%num2;
    if(r == 0){
        return num2;
    }
    else{
        return(gcd(num2,r));

    }

}
