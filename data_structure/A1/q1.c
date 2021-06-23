// Q01. Write a C Program to calculate sum and average of an array.

#include <stdio.h>

int main(){
	int a[100];
	int i, num, sum = 0;
	float avg;
	
	printf("Enter Number of Elements: ");
	scanf("%d", &num);
	
	for(i = 0;i<num;i++)
		{
			printf("Enter the Elements: ");
			scanf("%d", &a[i]);
		}
	for(i = 0;i<num;i++)
	 sum += a[i];
	
	
	avg=(float)(sum/num);
	
	printf("Sum of Array: %d\n",sum);
	printf("Average of Array: %.2f\n",avg);
	
}
