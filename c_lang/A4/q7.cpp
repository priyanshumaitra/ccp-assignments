/*4.Q07.Write a C program to copy all elements from an array to another array.*/

#include <stdio.h>
int main(){
	int arr1[50], arr2[50];
	int i, n;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter elements in 1st array: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	printf("Elements in 2nd Array copied from 1st Array are:\n");
	/*copy the elements of arr1 to arr2 one by one*/
	for (i = 0; i < n; i++){
		arr2[i] = arr1[i];
		printf("%d, ", arr2[i]);
	}
	printf("\n");
	return 0;
}
