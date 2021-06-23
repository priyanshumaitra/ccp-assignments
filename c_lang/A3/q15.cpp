// Write a C program to calculate sum of digits of a number.

#include<stdio.h>
int main(){
	int i, n, s = 0, r;
	printf("Enter integer: ");
	scanf("%d", &n);
	while(n > 0){
		r = n % 10;
		s += r;
		n /= 10;
		i++;
	}
	printf("Sum of digits: %d\n",s);
	return 0;
}

