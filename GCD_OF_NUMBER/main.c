#include<stdio.h>
int gcd(int, int );
int main()
{

    int m,n,a;
    printf(" Enter the number\n");
    scanf("%d%d", &m,&n);
    a=gcd(m,n);
    printf("%d", a);
    return 0;
}

int gcd(int m, int n)
{

    int r;
    r = m%n;
    if(r == 0){
        return n;
    }
    else{
        return(gcd(n,r));

    }

}
