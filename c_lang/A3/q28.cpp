// Q28. Write a C program to find all prime factors of a number
 
#include <stdio.h>
int main(){
	int i, j, num, temp;
	printf("Enter any number to print Prime factors: ");
	scanf("%d", &num);
	printf("All Prime Factors of %d are: \n",num);
	for (i = 2; i <= num; i++)
	{
	// Check 'i' for factor of num 
	if (num % i == 0)
		{
			// Check 'i' for Prime 
			temp = 1;
			//  prime number starts from 2 and any factor of a number n is always less than n/2
			for (j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					temp = 0;
					break;
				}
			}
			
			// If 'i' is Prime number and factor of num 
			if (temp == 1)
			{
				printf("%d\t ", i);
			}
		}
	}
	printf("\n");
	return 0;
}

