// Write a C program to count number of digits in a number.

#include <stdio.h>
int main(){
	int n, count = 0, temp;
	printf("Enter any number: ");
	scanf("%d", &n);
	temp = n;
	while(n > 0){
		n /= 10;
		count++;
	}
	printf("%d has %d digits\n",temp,count);
	return 0;
}

