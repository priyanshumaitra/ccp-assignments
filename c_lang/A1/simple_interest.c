// Q17.Write a C program to enter P,T,R and calculate simple interest.

#include<stdio.h>
main(){
int p,time;          // p = principal
					// si = Simple Interest
	float rate,si;
	printf("Enter the Principal ammount: ");
	scanf("%d",&p);
	printf("Enter time in year: ");
	scanf("%d",&time);
	printf("Enter Rate of Interest: ");
	scanf("%f",&rate);
	si=(p*time*rate)/100.0;
	printf("Simple Interest: %.2f",si);
}

