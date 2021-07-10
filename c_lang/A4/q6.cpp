/*4.Q06.Write a C program to count total number of negative elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50], neg = 0;
	int i, n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
printf("Enter elements: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	/*negative elements logic*/
	for (i = 0; i < n; i++){
		if (arr[i] < 0)
			neg++;
	}
	printf("Total number of negative elements are: %d\n", neg);
	return 0;
}
