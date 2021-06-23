//Write a C program to create Simple Calculator using switch case.

#include <stdio.h>
int main()
{
	int num1, num2, n;
	printf("Enter two Positive integer Number:");
	scanf("%d%d", &num1, &num2);
	printf("\nPress 1 for Addition.\nPress 2 for Subtraction.\nPress 3 for Multiplication.\nPress 4 for Division.\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
		printf("The sum of two numbers is: %d\n", num1 + num2);
		break;
		case 2:
		printf("The difference of two numbers is: %d\n", num1 - num2);
		break;
		case 3:
		printf("The multiplication of two numbers is: %d\n", num1 * num2);
		break;
		case 4:
		printf("The division of two numbers is: %d\n", num1 / num2);
		break;
		default:
		
		printf("\nWrong input");
	}
	return 0;
}
