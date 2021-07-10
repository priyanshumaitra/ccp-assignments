#include <stdio.h>
int strLen (char len[]){
	int i = 0;
	while (len[i] != '\0'){
		i++;
	}
	return i - 1;
}
void wordCount (char arr[]){
	int strlen = strLen (arr);
	int c = 0;
	for (int i = 0; i <= strlen; i++){
		if (arr[i] == ' ' || arr[i] == '\t')
	c++;
	}
	printf("Total WORDS: %d\n", c+1);
}
int main(){
	char str[100];
	printf("Enter a String: ");
	fgets(str, sizeof(str), stdin);
	wordCount(str);
	return 0;
}
