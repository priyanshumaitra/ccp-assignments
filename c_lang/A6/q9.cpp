#include <stdio.h>
int main(){
	char str[100];
	int i, n, c = 0, j = 0;
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	while (str[j] != '\0'){
	j++;
}
n = j-1;
for(i = 0; i < n/2; i++)
{
	if(str[i] == str[n-i-1])
	c++;
}
if(c == i)
	printf("string is palindrome");
else
	printf("string is not palindrome");
return 0;
}
