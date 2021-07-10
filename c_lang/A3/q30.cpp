// Q30. Write a C program to print all Armstrong numbers between 1 to n.

#include <stdio.h>
#include <math.h>
int main() {
	int lim, num, temp, rem, count = 0;
	double result = 0.0;
	printf("Enter the range: ");
	scanf("%d", &lim);
	printf("Armstrong numbers between 1 and %d are: ", lim);
	// iterate num from 1 to (lim - 1)
	// In each iteration, check if num is
	//Armstrong
	for (num = 1; num < lim; ++num) {
			temp = num;
		// num of digits calculation
		while (temp != 0) {
			temp /= 10;
			++count;
		}
		temp = num;
		// result contains sum of nth power of
		//individual digits
		while (temp != 0) {
			rem = temp % 10;
			result += pow(rem, count);
			temp /= 10;
		}
		// check if num is equal to the sum of nth
		//power of individual digits
		if ((int)result == num) {
		printf("%d, ", num);
		}
		// resetting the values
		count = 0;
		result = 0;
	}
	printf("\n");
	return 0;
}

