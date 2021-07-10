// Q26. Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>
int main(){
	int n, i, j;
	printf("Enter range: ");
	scanf("%d", &n);
	printf("All prime numbers between 1 to %d: ",n);
	for (i = 2; i <= n; i++){
		for (j = 2; j < i; j++){
			if(i % j == 0)
			break;
		}
		if (i == j)
		printf("%d, ", i);
	}
	return 0;
}

