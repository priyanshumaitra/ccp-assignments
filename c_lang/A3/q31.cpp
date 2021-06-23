// Q31. Write a C program to check whether a number is Perfect number or not.

#include <stdio.h>
int main(){
	int n, s = 0, i;
	printf("Enter integer: ");
	scanf("%d", &n);
	for (i = 1; i <= n/2; i++){
	//a number does not have any proper
	//positive divisor greater than num/2
		if (n % i == 0)
		s += i;
	}
	if (s == n)
		printf("%d is Perfect Number.\n",n);
	else
		printf("%d is not Perfect No.\n",n);
	return 0;
}

