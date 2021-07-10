/*8. Write a C program to access two dimensional array using pointers.*/
#include <stdio.h>
int main()
{
	int arr[100][100];
	int row,col,i,j;
	printf("Enter no. of rows: ");
	scanf("%d",&row);
	printf("Enter no. of columns: ");
	scanf("%d",&col);
	if(row != col)
		printf("\nrows and columns must be same.\n");
	else
	{
		printf("\nEnter elements of the array one by one in %dx%d order:\n",row,col);
		for(i=0;i<row;i++){
			for(j=0;j<col;j++)
				scanf("%d",(*(arr+i)+j));
		}
		printf("\n===2-D array is===\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d  ",*(*(arr+i)+j));
			}
		}
	}
}
