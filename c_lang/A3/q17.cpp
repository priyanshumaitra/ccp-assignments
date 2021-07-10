// Q17. Write a C program to check whether a number is palindrome or not.

#include <stdio.h>
int main(){
	int n, rem, rev = 0, i, f;
	printf("Enter integer: ");
	scanf("%d", &n);
	f = n;
	while(n > 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
		i++;
	}
	if (f == rev)
		printf("The number is palindrome\n");
	else
		printf("The number is not Palindrome");
	return 0;
}

