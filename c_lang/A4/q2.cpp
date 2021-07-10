/*4.Q02.Write a C program to print all negative elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50], i, n;
		printf("Enter number of elements: ");
	scanf("%d", &n);

	/*Read elements*/
	for (i = 0; i < n; i++){
		printf("Enter the elements: ");
		scanf("%d", &arr[i]);
	}
	printf("All Negative Elements are:\n");
	/*Print negative elements*/
	for (i = 0; i < n; i++){
		if (arr[i] < 0)
				printf("%d, ", arr[i]);
	}
	return 0;
}
