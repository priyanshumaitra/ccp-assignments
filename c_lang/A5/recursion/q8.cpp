#include <stdio.h>
int sumDigi (int);
int main (){
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);
	printf("Sum of digits: %d", sumDigi(n));
	return 0;
}
int sumDigi (int num){
	if (num == 0)
		return 0;
	else
		return (num % 10)+sumDigi(num/10);
}
