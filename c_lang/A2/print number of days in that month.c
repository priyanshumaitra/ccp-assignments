// Write a C program to input month number and print number of days in that month.

#include<stdio.h>
void main(){
	int month;
	printf("Enter Month Number: ");
	scanf("%d",&month);
	switch(month){
		case 1:
		printf("January, that has 31 days\n");
		break;
		case 2:
		printf("February, that has 28 days\n");
		break;
		case 3:
		printf("March, that has 31 days\n");
		break;
		case 4:
		printf("April, that has 30 days\n");
		break;
		case 5:
		printf("May, that has 31 days\n");
		break;
		case 6:
		printf("June, that has 30 days\n");
		break;
		case 7:
		printf("July, that has 31 days\n");
		break;
		case 8:
		printf("August, that has 31 days\n");
		break;
		case 9:
		printf("September, that has 30 days\n");
		break;
		case 10:
		printf("October, that has 31 days\n");
		break;
		case 11:
		printf("November, that has 30 days\n");
		break;
		case 12:
		printf("December, has 31 days\n");
		break;
		default:
		printf("Invalid Month Number\n");
	}
}

