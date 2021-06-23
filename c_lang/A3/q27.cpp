// Q27. Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>
int main(){
	int n, i, j, sum = 0;
	printf("Enter the Range: ");
	scanf("%d", &n);
	printf("Sum of all prime numbers between 1 to %d: ", n);
	for (i = 2; i <= n; i++){
			for (j = 2; j <= i; j++){
			if(i % j == 0)
			break;
		}
		if (i == j)
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

