// Write a C program to find maximum between two numbers.

#include<stdio.h>
main(){
	int n1,n2;
	printf("Number 1: ");
	scanf("%d",&n1);
	printf("Number 2: ");
	scanf("%d",&n2);
	if(n1>n2)
		printf("%d is larger than %d\n",n1,n2);
	else
		printf("%d is larger than %d\n",n2,n1);
}

