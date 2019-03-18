#include<stdio.h>
int day_code(int year){
int d1 = (year-1)/4;
int d2 = (year-1)/400;
int d3 = (year-1)/100;
int dayCode = (d1+d2+d3)%7;
return dayCode;
};
int main(){
int  year;
system("color b");
printf("\n\n :: This Is Gives you The First Day of The Year :: ");
printf("\n\n Enter a Year -->   ");
scanf("%d", &year);
int result = day_code(year);
printf("\The dayCode is --->  %d", result);
return 0;
system("pause");
}
