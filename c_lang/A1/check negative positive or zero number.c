// Write a C program to check whether a number is negative, positive or zero

#include<stdio.h>
main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(n<0)
	printf("The entered number is Negative");
	else if(n==0)
	printf("The entered number is Zero");
	else
	printf("The entered number is Positive");
}

