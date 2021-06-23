#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter Interval: ");
	scanf("%d",&num);
	for(i=1;i<=(num*2-1);i++){
		if(i == num){
			for(j=1;j<=(num*2-1);j++)
				printf("+");
		}
		else{
			for(j=1; j<=num-1; j++){
				printf(" ");
			}
			printf("+");
		}
	printf("\n");
	}
}
