#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char ch[50], ch2[50];
    int Temp;
    system("color fa");
    printf("\n");
    printf("Enter A String\n");fukl
    gets(ch);
    Temp = ch;
    puts(ch);
    char rev[50];
    strrev(ch);
    printf("%s" , ch);
    printf("Enter String For \'ch2\' \n");
    gets(ch2);
    printf("This is the Addtion Of TWO Temp + CH2\n");
    strcat(Temp, ch2);
    printf("%s", Temp);
    return 0;
}
