//Write a C program to print all alphabets from a to z. - using while loop.

#include <stdio.h>
int main(){
	int i = 97;
	printf("Alphabets:\n");
	while(i <= 122){
		printf("%c ",i);
		i++;
	}
	return 0;
}
