// Write a C Program to find the second largest & second smallest elements in an Array

#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("Enter the Number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements : \n");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
	
	printf("\nSecond Smallest Element is : %d",a[2]);
	printf("\nSecond Largest Element is : %d",a[n-1]);
}
