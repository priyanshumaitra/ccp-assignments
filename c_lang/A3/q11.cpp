// Q11. Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main(){
	int n, s=0, i;
	printf("Enter Range: ");
	scanf("%d", &n);
	for(i=1;i <= n;i++){
		if(i%2==0){
		s += i;
		}
	}
	printf("Sum of all even numbers between 1 to %d is: %d\n",n,s);
	return 0;
}

