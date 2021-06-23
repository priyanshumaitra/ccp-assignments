//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop.


#include <stdio.h>
int main(){
	int num;
	int i;
	printf("Enter the initial number: ");
	scanf("%d",&num);
	i = num;
	while(i > 0){
		printf("%d ",i);
		i--;
	}
	return 0;
}
