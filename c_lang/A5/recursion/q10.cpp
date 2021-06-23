#include <stdio.h>
int fibo(int);
int main(){
	int n;
	printf("Enter the term number: ");
	scanf("%d", &n);
	printf("Fibonacci series of %dth term is: %d\n", n, fibo(n));
	return 0;
}
int fibo (int num){
	if(num == 0)
	return 0;
	else if(num == 1)
	return 1;
	else
	return fibo(num-1) + fibo(num-2);
}
