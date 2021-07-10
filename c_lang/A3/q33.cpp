// Q33. Write a C program to check whether a number is Strong number or not.


#include <stdio.h>
int main(){
	int i, temp, n, lastDigit, s;
	long fact;
	printf("Enter any number: ");
	scanf("%d", &n);
	temp = n;
	s = 0;
	/* Find sum of factorial of digits */
	while(n > 0)
	{
		/* Get last digit of num */
		lastDigit = n % 10;
		/* Find factorial of last digit */
		fact = 1;
		for(i = 1; i <= lastDigit; i++)
		{
			fact *= i;
		}
		/* Add factorial to sum */
		s += fact;
		n /= 10;
	}
	/* Check Strong number condition */
	if(s == temp)
		printf("%d is strong number", temp);
	else
		printf("%d is not strong number",temp);
	return 0;
}

