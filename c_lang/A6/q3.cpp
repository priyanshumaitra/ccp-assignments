#include <stdio.h>
int strLen (char str1[]){
	int i = 0;
	while (str1[i] != '\0'){
		i++;
	}
	return i - 1;
}
void concat (char str1[], char str2[]){
	int len1 = strLen (str1);
	int i;
	for (i = 0; str2[i] != '\0'; i++){
		str1[len1] = str2[i];
		len1++;
	}
	printf("Concatenated String: %s", str1);
}
int main(){
	char arr1[100], arr2[100];
	printf("Enter 1st String: ");
	fgets(arr1, sizeof(arr1), stdin);
	printf("Enter 2nd String: ");
	fgets(arr2, sizeof(arr2), stdin);
	concat(arr1, arr2);
	return 0;
}
