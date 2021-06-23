// Q22. Write a C program to find all factors of a number.

#include <stdio.h>
int main(){
	int n;
	int i;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Factors are: ");
	for (i = 1; i <= n; i++){
		if (n % i == 0){
			printf("%d ", i);
		}
	}
	return 0;
}

