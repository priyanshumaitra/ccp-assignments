#include <stdio.h>
int facto (int);
int main(){
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	printf("Factorial is: %d", facto(n));
	return 0;
	}
int facto (int num){
	if (num == 1)
		return 1;
	else
		return num * facto(num-1);
}
