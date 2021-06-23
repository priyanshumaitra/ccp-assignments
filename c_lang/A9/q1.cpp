/*
		  *******
		   ******
		    *****
		     ****
		      ***
		       **
		        *
        
		
*/
#include <stdio.h>
int main()
{
	int i,j,k, temp = 1,num;
	printf("Enter Row: ");
	scanf("%d",&num);
	printf("\n");
	for (i = num; i>=1; i--){
		for (k=temp; k>=0; k--)
			printf(" ");
		for (j=i; j>=1; j--)
			printf("*");
		temp = temp + 1;
		printf("\n");
	}
}
