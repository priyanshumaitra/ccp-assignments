#include <stdio.h>
int calRev(int, int);
int main(){
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);
	printf("Reversed number: %d\n", calRev(n,0));
	return 0;
}
int calRev(int num, int rev){
	if (num != 0){
		int rem = num % 10;
		int result = (rev * 10) + rem;
		int c = num / 10;
		return calRev(c, result);
	}
	else
	return rev;
}
