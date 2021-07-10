#include <stdio.h>
int compare (char a1[], char a2[]){
	int i = 0, flag = 0;
	while (a1[i] != '\0' && a2[i] != '\0'){
		if (a1[i] != a2[i]){
			flag = 1;
			break;
		}
			i++;
	}
	if (flag == 0 && a1[i] == '\0' && a2[i] == '\0')
		return 1;
	else
		return 0;
}
int main(){
	char str1[100], str2[100];
	printf("Enter 1st string: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter 2nd string: ");
	fgets(str2, sizeof(str2), stdin);
	if (compare (str1, str2) == 1)
		printf("Strings are same");
	else
		printf("Strings are different");
	return 0;
}
