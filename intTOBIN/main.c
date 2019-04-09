/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void resultBIN(int n) {
    int arrBIN[8] = {0,0,0,0,0,0,0,0} ;
    int str = n;
       int f = 7;
       while(str > 0) {
        arrBIN[f] = str % 2 ;
        str = str/2 ;
        f -- ;
    }
    for(int i = 0;i<=7;i++) {
        printf("%d", arrBIN[i]);
    }
}

int main()
{
    int n = 3 ;
    resultBIN(n);
}
