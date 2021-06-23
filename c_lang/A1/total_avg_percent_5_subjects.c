// Q16.Write a C program to enter marks of five subjects and calculate total,average and percentage.

#include<stdio.h>
main(){
	int ben,eng,math,phy,chem, total;
	float avg,percen;
	printf("Enter marks of Bengali: ");
	scanf("%d",&ben);
	printf("Enter marks of English: ");
	scanf("%d",&eng);
	printf("Enter marks of Math: ");
	scanf("%d",&math);
	printf("Enter marks of Physics: ");
	scanf("%d",&phy);
	printf("Enter marks of Chemistry: ");
	scanf("%d",&chem);
	total=ben+eng+math+phy+chem;
	avg=total/5;
	percen=total*0.2;
	printf("\n\nTotal: %d\nAverage: %.2f\nPercentage: %.2f\n",total,avg,percen);
}


