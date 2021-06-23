// Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
int main(){
	int n, i, s=0;
	printf("Enter range: ");
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		s+= i;
	}
	printf("Sum of natural numbers between 1 to %d is: %d\n",n,s);
	return 0;
}

