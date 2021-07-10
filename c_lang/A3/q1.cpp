#include <stdio.h>
int main() {
	int n1, n2;
	printf("Enter two integer Numbers:");
	scanf("%d%d", &n1, &n2);
	printf("Before Swapping:\n");
	printf("1st Number: %d\n2nd Number: %d", n1, n2);
	
	n1 = n1 ^ n2;
	n2 = n1 ^ n2;
	n1 = n1 ^ n2;
	printf("\nAfter Swapping:\n");
	printf("1st Number: %d\n2nd Number: %d\n", n1, n2);
	return 0;
}

