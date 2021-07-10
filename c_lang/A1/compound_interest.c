// Q18.Write a C program to enter P,T,R and calculate compound interest.

#include<stdio.h>
#include<math.h>
main(){
	int p,time;
	float rate,fa,compi;
	printf("Enter Principal Balance: ");
	scanf("%d",&p);
	printf("Enter time in year: ");
	scanf("%d",&time);
	printf("Enter Rate of Interest: ");
	scanf("%f",&rate);
	fa=(float)(p*pow((1+rate/100),time));
	compi=(float)fa-p;
	printf("Compound Interest: %.2f\nFinal Amount: %.2f\n",compi,fa);
}

