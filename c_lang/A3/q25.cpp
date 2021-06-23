// Q25. Write a C program to check whether a number is Prime number or not.

#include <stdio.h>
int main(){
	int n, i;
	printf("Enter positive number: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++){
		if(n % i == 0)
		break;
	}
	if(n == 1)
		printf("1 is neither prime nor composite");
	else{
		if(n == i)
			printf("%d is a prime number",n);
		else
			printf("%d is not a Prime number",n);
	}
return 0;
}

