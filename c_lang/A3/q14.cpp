// Q14. Write a C program to find first and last digit of a number.

#include<stdio.h>
int main(){
	int i = 1, n, fD, lD;
	printf("Enter number: ");
	scanf("%d", &n);
	fD = n;
	while(fD >= 10){
		lD = n % 10;
		fD /= 10;
		i++;
	}
	printf("First Digit: %d\n",fD);
	printf("Last Digit: %d\n",lD);
	return 0;
}

