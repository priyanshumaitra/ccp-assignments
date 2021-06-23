#include<stdio.h>
int main()
{
	int i,j,num,col=1;
	printf("Enter Columns:");
	scanf("%d",&num);	printf("\n");
	for(i=1;i<num*2;i++){
		for(j=1;j<=col;j++)
			printf("*");
		if(i < num)
			col++;
		else
			col--;
		printf("\n");
	}
}
