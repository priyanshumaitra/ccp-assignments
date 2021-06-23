#include <stdio.h>
int findLcm (int,int);
int main (){
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	printf("LCM of %d and %d is: %d\n", n1, n2,
	findLcm(n1,n2));
	return 0;
}
int findLcm (int num1, int num2){
	static int lcm = 0;
	lcm = lcm + num2;
	if (lcm%num1 == 0 && lcm%num2 == 0)
	return lcm;
	else
	return findLcm (num1, num2);
	}
