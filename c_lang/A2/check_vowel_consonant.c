// Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
void main(){
	char ch;
	printf("Enter any Alphabet: ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		switch(ch){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
			printf("vowel");
			break;
			default:
			printf("consonant");
		}
	}
	else
	printf("Not an Alphabet");
	
}
