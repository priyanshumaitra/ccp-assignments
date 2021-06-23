/*4.Q05.Write a C program to count total number of even and odd elements in an array.*/

#include <stdio.h>
int main(){
	int arr[50], n, i;
	int o = 0, e = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	/*Read elements*/
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	/*odd & even calculate logic*/
	for (i = 0; i < n; i++){
		if (arr[i] % 2 == 0)
			e++;
		else  
			o++;
	}
	printf("\n odd number: %d\n even number: %d\n", o, e);
	return 0;
}
