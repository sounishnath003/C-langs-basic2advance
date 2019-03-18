#include <stdio.h>
int addNumbers(int n);

int main()
{
    int num;
    system("color 5D");
    system ("tree");
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addNumbers(num));
    return 0;
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);

}
