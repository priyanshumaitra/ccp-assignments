// Q35. Write a C program to print Fibonacci series up to n terms.

#include <stdio.h>
	int main()
	{
	int n1 = 0, n2 = 1;
	int temp, lim, i;
	printf("Enter the number of terms: ");
	scanf("%d", &lim);
	printf("Fibonacci Series:\n");
	printf("%d %d ", n1, n2);
	for (i = 0; i <= lim; i++)
	{
	//swap the numbers and move forward
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%d ", temp);
	}

	return 0;
}

