// Write a C program to check whether a number is even or odd.


#include<stdio.h>
main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}

