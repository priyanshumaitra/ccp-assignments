#include <stdio.h>
int sumNat (int);
int main (){
	int lim;
	printf("Enter limit:");
	scanf("%d", &lim);
	printf("Sum of all natural numbers from 1 to %d is  %d", lim, sumNat(lim));
	return 0;
}
int sumNat (int num){
	if (num == 1)
		return num;
	else
		return (num + sumNat(num-1));
}
