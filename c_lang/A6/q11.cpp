#include <stdio.h>
int main() {
	char str[100], key;
	int count = 0;
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter a character to find its frequency:");
	scanf("%c", &key);
	for (int i = 0; str[i] != '\0'; ++i) {
		if (key == str[i])
		++count;
	}
	printf("Number frequency of %c is: %d\n", key,count);
	return 0;
}
