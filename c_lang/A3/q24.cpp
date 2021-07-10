// Q24. Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>
int main(){
	int n1, n2, i, m;
	printf("Enter 1st number: ");
	scanf("%d", &n1);
	printf("Enter 2nd number: ");
	scanf("%d", &n2);
	//storing the smallest between two no.s to m
	m = (n1 > n2) ? n2 : n1;
	for (i = m; i >= 1; i--){
	if (n1 % i == 0 && n2 % i == 0)
	break;
	}
	printf("GCD is: %d", i);
return 0;
}

