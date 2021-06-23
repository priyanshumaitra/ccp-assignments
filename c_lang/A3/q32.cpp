// Q32. Write a C program to print all Perfect numbers between 1 to n.

#include <stdio.h>
int main(){
	int n, s = 0, i, j;
	printf("Enter range: ");
	scanf("%d", &n);
	printf("Perfect numbers: ");
	for (i = 1; i <= n; i++){
		s = 0;
		for (j = 1; j < i; j++){
			if (i % j == 0)
			s += j;
		}
		if (s == i)
			printf("%d ", i);
	}
	return 0;
}

