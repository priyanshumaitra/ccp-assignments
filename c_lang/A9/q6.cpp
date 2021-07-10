#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter Row: ");
	scanf("%d",&num);	printf("\n");
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			if(i == j)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
}
