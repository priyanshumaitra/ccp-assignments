// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
void main(){
	char ch;
	printf("Enter Alphabet: ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		if(ch>=65 && ch<=90)
			printf("The Alphabet is in Upper Case");
		else if(ch>=97 && ch<=122)
			printf("The Alphabet is in Lower Case");
	}
	else
	printf("Not Alphabet");
}

