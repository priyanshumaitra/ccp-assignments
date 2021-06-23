#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter interval: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=(num*2-1); i++){
		for(j=1;j<=(num*2-1); j++){
			if(j == i || (j == (num*2-1)-i+1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
