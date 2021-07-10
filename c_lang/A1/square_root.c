//Write a C program to enter any number and calculate its square root.

#include<stdio.h>
#include<math.h>
main(){
int num,sqroot;
printf("Enter number to calculate square root: ");
scanf("%d",&num);
sqroot=sqrt(num);
printf("Square Root of %d is %d\n",num,sqroot);
}

