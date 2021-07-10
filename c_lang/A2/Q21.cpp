/* Q21. Write a C program to input electricity unit
charges and calculate total electricity bill according to
the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
int main(){
	float unit, total;
	printf("Electricity Unit: ");
	scanf("%f",&unit);
	if(unit<=50){
		total = unit*0.5;
	}
	else if(unit<=150){
		total = (50*0.5)+(unit-50)*0.75;
	}
	else if(unit<=250){
		total = (50*0.5)+(100*0.75)+(unit-150)*1.20;
	}
	else if(unit>250){
		total = (50*0.5)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
	}
	total += total*0.2;
	printf("Total Electricity Bill: Rs. %.2f/-\n",total);
}

