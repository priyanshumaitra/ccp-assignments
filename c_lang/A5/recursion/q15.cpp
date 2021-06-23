#include <stdio.h>
int maximum(int array[], int size, int i);
int minimum(int array[], int size, int i);
int main(){
	int array[50], n, max, min, i;
	printf("Enter no. of elements:");
	scanf("%d", &n);
	printf("Enter the elements: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	max = maximum(array, n, 0);
	min = minimum(array, n, 0);
	printf("Min element in the array is: %d\n", min);
	printf("Max element in the array is: %d\n", max);
	return 0;
}
int maximum(int array[], int size, int i){
	int max;
	if(i >= size-2)
	{
		if(array[i] > array[i + 1])
		return array[i];
		else
		return array[i + 1];
		}
	
	max = maximum(array, size, i+1);
	if(array[i] > max)
		return array[i];
	else
		return max;
}
int minimum(int array[], int size, int i){
	int min;
	if(i >= size-2)
	{
		if(array[i] < array[i + 1])
		return array[i];
		else
		return array[i + 1];
	}
	min = minimum(array, size, i+1);
	if(array[i] < min)
		return array[i];
	else
		return min;
}
