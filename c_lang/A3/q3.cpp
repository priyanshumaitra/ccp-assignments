//Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>
int main()
{
	int n;
	printf("Enter an integer number: ");
	scanf("%d", &n);
	switch(n % 2)
	{
		case 0:
		printf("Even:%d\n", n);
		break;
		case 1:
		printf("Odd:%d\n", n);
		break;
	}
	return 0;
}
