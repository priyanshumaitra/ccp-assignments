//
#include <stdio.h>
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);

	(n & 1) //& is bitwise AND
	? printf("%d is odd\n", n)
	: printf("%d is even\n", n);
	return 0;
}
