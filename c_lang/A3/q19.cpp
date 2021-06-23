//Q19. Write a C program to enter a number and print it in words.

#include <stdio.h>
int main(){
	int num, rem, rev = 0;
	int i, count = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	//Reverse the number
	while (num > 0){
	rem = num % 10;
	rev = rev * 10 + rem;
	num = num / 10;
	count++;
	}
	//pass the digits of reversed number one by	one in switch
	for (i = 0; i < count; i++){
	switch (rev % 10){
	case 0:
	printf("Zero ");
	break;
	case 1:
	printf("One ");
	break;
	case 2:
	printf("Two ");
	break;
	case 3:
	printf("Three ");
	break;
	case 4:
	printf("Four ");
	break;
	case 5:
	printf("Five ");
	break;
	case 6:
	printf("Six ");
	break;
	case 7:
	printf("Seven ");
	break;
	case 8:
	printf("Eight ");
	break;
	case 9:
	printf("Nine ");
	break;
	}
	rev = rev / 10;
	}
	return 0;
}
