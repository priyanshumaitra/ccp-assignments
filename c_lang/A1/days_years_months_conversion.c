#include<stdio.h>
main(){
int day;
int year,week;
int n;
printf("Enter days that you want to calculate: ");
scanf("%d",&day);
n=day;
year=day/365;
day=day%365;
week=day/7;
day=day%7;
printf("%d days represents\n",n);
printf("Year(s): %d\nWeek(s): %d\nDay(s): %d\n",year,week,day);
}

