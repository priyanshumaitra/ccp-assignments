#include <stdio.h>
int strLen (char len[]){
	int i = 0;
	while (len[i] != '\0'){
		i++;
	}
	return i - 1;
}
void convertStr (char lowerStr[], char upperStr[]){
	int strlen = strLen (lowerStr);
	for (int i = 0; i <= strlen; i++){
		if (lowerStr[i] >= 97 && lowerStr[i] <= 122){
			upperStr[i] = lowerStr[i] - 32;
		}
		else
			upperStr[i] = lowerStr[i];
	}
	printf("String in UPPERCASE is: %s\n", upperStr);
}
int main (){
	char lower_str[100], upper_str[100];
	printf("Enter a string: ");
	fgets(lower_str, sizeof(lower_str), stdin);
	convertStr(lower_str, upper_str);
	return 0;
}
