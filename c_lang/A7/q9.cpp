/*9. Write a C program to add two matrix using pointers.*/

#include<stdio.h>
int main()
{
	int arr1[100][100],arr2[100][100],sum[100][100];
	int row,col,i,j;
	printf("Enter row no. for matrix: ");
	scanf("%d",&row);
	printf("Enter column no. for matrix: ");
	scanf("%d",&col);
	printf("\nEnter elements of 1st matrix by %dx%d order:\n", row, col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",(*(arr1+i)+j));
	}
	printf("\nEnter elements of 2nd matrix by %dx%d order:\n", row, col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",(*(arr2+i)+j));
	}
	printf("\nSum of two matrices:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			*(*(sum+i)+j) = 0;
			*(*(sum+i)+j) = *(*(arr1+i)+j) + *(*(arr2+i)+j);
			printf("%d  ",*(*(sum+i)+j));
		}
	}
}
