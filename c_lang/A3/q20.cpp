// Q20. Write a C program to print all ASCII character with their values.


#include <stdio.h>
int main(){
	int i;
	printf("ASCII Character their values:\n");
	//ASCII 0-31, 127 are control characters
	for (i = 32; i < 127; i++){
	printf("%d = %c\t",i,i);
	}
	printf("\n");
	return 0;
}

