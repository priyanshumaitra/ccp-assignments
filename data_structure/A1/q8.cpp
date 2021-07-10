// Write a C Program to Put Even & Odd Elements of an Array in 2 Separate Arrays

#include <stdio.h>
int main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input elements in the array :\n");
       for(i=0;i<n;i++)
            {
	      
	      scanf("%d",&arr1[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
    
 }

