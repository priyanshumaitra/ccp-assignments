#include <stdio.h>
int sumEven (int);
int sumOdd (int);
int main(){
	int evenLim, oddLim;
	printf("Enter limit of even: ");
	scanf("%d", &evenLim);
	printf("Enter limit of odd: ");
	scanf("%d", &oddLim);
	printf("Sum of all Even numbers from 1 to is %d: %d", evenLim, sumEven(evenLim));
	printf("\n");
	printf("Sum of all Odd numbers from 1 to is %d: %d", oddLim, sumOdd(oddLim));
	printf("\n");
	return 0;
}
int sumEven(int num){
	if (num > 1)
	return num + sumEven(num-2);
	else
	return 0;
}
int sumOdd(int num){
	if (num > -1)
	return num + sumOdd(num-2);
	else
	return 0;
}
