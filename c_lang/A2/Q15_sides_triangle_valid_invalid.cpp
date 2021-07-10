// Q15.Write a C program to input all sides of a triangle and check whether triangle is valid or not.


#include<stdio.h>
int main(){
	float s1,s2,s3;
	printf("Enter the three sides of triangle\n");
	scanf("%f%f%f",&s1,&s2,&s3);
	if((s1+s2)>s3){
	if((s2+s3)>s1){
	if((s1+s3)>s2){
		printf("This Triangle is valid\n");
	}
	else
	{
		printf("This Triangle is not valid\n");
	}
	}
	else
	{
		printf("This Triangle is not valid\n");
	}
	}
	else
	{
		printf("This Triangle is not valid\n");
	}
}

