// Q34. Write a C program to print all Strong numbers between 1 to n.


#include <stdio.h>
int main()
{
	int i, j, n, lastDigit, l;
	long long fact, s;
	/* Input upper limit from user */
	printf("Enter the range: ");
	scanf("%d", &l);
	printf("All strong numbers between 1 to %d are:\n", l);
	/* Iterate from 1 to limit */
	for(i = 1; i <= l; i++)
	{
		/* Number to check for strong number */
		n = i;
		s = 0;
		/* Find the sum of factorial of digits */
		while(n > 0)
		{
			fact = 1ll;
			lastDigit = n % 10;
			/* Find factorial of last digit of
			current num. */
			for( j = 1; j <= lastDigit; j++)
			{
				fact = fact * j;
			}
			s += fact;
			n /= 10;
		}
		/* Print 'i' if it is strong number */
		if(s == i)
		printf("%d, ", i);
	}

return 0;
}

