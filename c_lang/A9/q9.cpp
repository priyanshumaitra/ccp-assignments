#include<stdio.h>
int main()
{
	int i,j,k,num;
	printf("Enter number of line:- ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;++i){
		for(j=1;j<=num-i;++j){
			printf("  ");
		}
		for(k=0;k!=2*i-1;++k)
				printf("* ");
		printf("\n");
	}
}
