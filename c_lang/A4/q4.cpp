/*4.Q04.Write a C program to find maximum and minimum element in an array.*/

#include <stdio.h>
int main(){
	int arr[50], n, i;
	int max, min;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	/*find max and min*/
	max = arr[0];
	min = arr[0];
	for (i = 0; i < n; i++){
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("\nMaximam number: %d\nMinimum number: %d\n", max,min);
	return 0;
}
