// Q18.Write a C program to calculate profit or loss.

#include<stdio.h>
int main(){
	int buy,sell;
	printf("Enter Buying Price: ");
	scanf("%d",&buy);
	printf("Enter Selling Price: ");
	scanf("%d",&sell);
	if(sell-buy>0)
		printf("Profit!\n");
	else if(sell-buy<0)
		printf("Loss!\n");
	else
		printf("Neither profit nor loss!\n");
}

