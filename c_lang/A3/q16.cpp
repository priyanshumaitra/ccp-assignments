// Q16. Write a C program to enter a number and print its reverse.


#include <stdio.h>
int main(){
	int n, rem, rev = 0, i;
	printf("Enter Integer: ");
	scanf("%d", &n);
	while(n > 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
		i++;
	}
	printf("Reversed Number: %d\n", rev);
	return 0;
	}

