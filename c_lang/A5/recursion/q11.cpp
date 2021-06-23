#include <stdio.h>
int findGcd (int, int);
int main(){
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	printf("GCD of %d and %d is: %d\n", n1, n2,findGcd(n1,n2));
	return 0;
}
int findGcd (int num1, int num2){
	if(num1%num2 == 0)
	return num2;
	else
	return findGcd (num2, num1%num2);
	if(num2%num1 == 0)
	return num1;
	else
	return findGcd (num1, num2%num1);
}
