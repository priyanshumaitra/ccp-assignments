#include<stdio.h>
int Print(int i,int num)
{
	if(i > num)
		return 0;
	else
	{
		printf("%d ",i);
		return Print(i+2,num);
	}
}
int main()
{
	int num,i;
	printf("Enter Starting Value: ");
	scanf("%d",&i);
	printf("Enter Ending Value: ");
	scanf("%d",&num);
	if(i%2==0)
	{
		printf("\nAll Even Numbers: \n ");
		Print(i,num);
		printf("\nAll Odd Numbers: \n ");
		Print(i+1,num);
	}
	else if(i%2==1)
	{
		printf("\nAll Odd Numbers: \n");
		Print(i,num);
		printf("\nAll Even Numbers: \n");
		Print(i+1,num);
	}
}
