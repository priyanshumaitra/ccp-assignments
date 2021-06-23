// Q29. Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>
int main(){
	int num, temp, rem, n = 0;
	float result = 0.0;
	printf("Enter integer: ");
	scanf("%d", &num);
	temp = num;
	// store the number of digits of num in n
	for (temp = num; temp != 0; ++n)
	{
		temp /= 10;
	}
	temp = num;
	while (temp != 0){
		rem = temp % 10;
		// store the sum of the power of
		//individual digits in result
		result += pow(rem, n);
		temp /=10;
	}
	// if num is equal to result, the number is
	//an Armstrong number
	if ((int)result == num)
		printf("%d is an armstrong number",num);
	else
		printf("%d is not an armstrong number", num);
	return 0;
}
