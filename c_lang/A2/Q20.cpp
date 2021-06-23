/* Q20.Write a C program to input basic salary of an
employee and calculate its Gross salary according to
following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
int main(){
	int basic, hra, da, gross;
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);
	if(basic<=10000){
		hra= basic*0.2;
		da= basic*0.8;
		gross= basic+hra+da;
	}
	else if(basic<=20000){
		hra= basic*0.25;
		da= basic*0.9;
		gross = basic+hra+da;
	}
	else if(basic>20000){
		hra= basic*0.3;
		da= basic*0.95;
		gross= basic+hra+da;
	}
	printf("Gross Salary is: %d\n",gross);
}

