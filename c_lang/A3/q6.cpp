//Q06. Write a C program to print all natural numbers from 1 to n. - using while loop.

#include<stdio.h>
int main(){
	int i = 1, num;
	printf("Enter Range of Natural Numbers: ");
	scanf("%d",&num);
	while(i <= num){
		printf("%d ",i);
		i++;
	}
	
	return 0;
}
