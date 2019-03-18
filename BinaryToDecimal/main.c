#include<stdio.h>
int main()
{

    int num;
    int dr=0, base=1,rem;
    scanf("%d", &num);
    int temp;
    temp = num;
    while(num!=0){
        rem = num%10;
        dr = dr + rem*base;
        base = base*2;
        printf("the decimal >> %d", dr);
    }
    return 0;
}
