#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter Arms: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1; i<=num; i++){
		for(j=1; j<=num; j++){
			if(i == j || (j == (num+1)-i))
				printf("1 ");
			else
				printf("0 ");
			}
		printf("\n");
	}
}
