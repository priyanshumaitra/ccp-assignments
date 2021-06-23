/*4.Q01.Write a C program to read and print elements of array.*/

#include <stdio.h>
int main(){
	int arr[50], i, n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	} 
	printf("Elements are: \n");
	/*Print the elements*/
	 for (i = 0; i < n; i++)
	 	printf("%d ", arr[i]);
	 
	 printf("\n");
	 return 0;
}
