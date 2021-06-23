// Write a C Program to divide one array into two arrays

  #include<stdio.h>  
  
int main()  
{  
    int a[100], arr1[100], arr2[100], i, pos, k1 = 0, k2 = 0, n;  
  
    printf("Enter the number of elements\n");  
    scanf("%d", &n);
	printf("Enter the elements\n");
	for(i = 0; i<n; i++)
        scanf("%d", &a[i]);  
  
    printf("Enter position to split the array in to Two\n");  
    scanf("%d", &pos);  
  
    for(i = 0; i<n; i++)  
    {  
        if(i < pos)  
            arr1[k1++] = a[i];  
        else  
            arr2[k2++] = a[i];  
    }  
  
    printf("\nElements of First Array----\n", k1);  
    for(i = 0; i < k1; i++)  
        printf("%d\n", arr1[i]);  
  
    printf("\nElements of Second Array----\n", k2);  
    for(i = 0; i < k2; i++)  
        printf("%d\n", arr2[i]);  
   
  
    return 0;  
} 
