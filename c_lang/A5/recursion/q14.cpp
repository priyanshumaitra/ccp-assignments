#include <stdio.h>
int sumArr (int array[], int size, int j){
	if (j >= size)
		return 0;
	else
		return (array[j]+sumArr(array,size,j+1));
}
int main(){
	int arr[50],i,n;
	printf("Enter no. of elements:");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for (i = 0; i < n; i++)
	scanf("%d", &arr[i]);
	printf("Sum of array elements is: %d\n",
	sumArr(arr,n,0));
	return 0;
}
