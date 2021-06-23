#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter Row: ");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		for(j=i;j<=num;j++){
			printf("%d ",1 + j-1);
		}
		printf("\n");
	}
}
