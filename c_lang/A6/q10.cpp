#include <stdio.h>
int main(){
	char str[100], key;
	int i;
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter the Character to find first Occurrence: ");
	scanf("%c", &key);
	for(i = 0; str[i] != '\0'; i++){
		if (key == str[i])
		break;
	}
	printf("%c first found at postion %d", key,i+1);
	return 0;
}
