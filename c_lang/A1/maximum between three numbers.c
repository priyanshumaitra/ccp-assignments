// Write a C program to find maximum between three numbers

#include<stdio.h>
main(){
	int n1,n2,n3;
	printf("Number 1: ");
	scanf("%d",&n1);
	printf("Number 2: ");
	scanf("%d",&n2);
	printf("Number 3: ");
	scanf("%d",&n3);
		if(n1>n2)
		{
			if(n1>n3)
			printf("%d is the largest number\n",n1);
			else
			printf("%d is the largest number\n",n3);
		}
		else
		{
			if(n2>n3)
			printf("%d is the largest number\n",n2);
			else
			printf("%d is the largest number\n",n3);
		}
}

