// Q23. Write a C program to calculate factorial of a number.

#include <stdio.h>
int main(){
	int n, fact = 1;
	int i;
	printf("Enter number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		fact *= i;
	}
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}

