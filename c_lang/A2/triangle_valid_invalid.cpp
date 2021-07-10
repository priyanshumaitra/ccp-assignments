// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main(){
	float a1,a2,a3;
	printf("Enter 1st angle of triangle: ");
	scanf("%f",&a1);
	printf("Enter 2nd angle of triangle: ");
	scanf("%f",&a2);
	printf("Enter 3rd angle of triangle: ");
	scanf("%f",&a3);
	if((a1+a2+a3)==180 && a1!=0 && a2!=0 && a3!=0)
	printf("This Triangle is Valid\n");
	else
	printf("This Triangle is not Valid\n");
}

