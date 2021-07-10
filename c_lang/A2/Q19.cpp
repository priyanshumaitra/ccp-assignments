/* 	Q19. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F 	*/

#include<stdio.h>
main(){
	float phy,chem,bio,math,comp;
	float percentage;
	printf("Enter your marks in Physics: ");
	scanf("%f",&phy);
	printf("Enter your marks in Chemistry: \n");
	scanf("%f",&chem);
	printf("Enter your marks in Biology: \n");
	scanf("%f",&bio);
	printf("Enter your marks in Mathematics: \n");
	scanf("%f",&math);
	printf("Enter your marks in Computer: \n");
	scanf("%f",&comp);
	percentage = (phy+chem+bio+math+comp)/5.0;

	printf("\n\nYou got %.2f percentageent\n\n",percentage);
	if(percentage>=90)
	printf("\n\ngrade is A\n\n");
	else if(percentage>=80 && percentage<90)
	printf("\n\ngrade is B\n\n");
	else if(percentage>=70 && percentage<80)
	printf("\n\ngrade is C\n\n");
	else if(percentage>=60 && percentage<70)
	
	printf("\n\ngrade is D\n\n");
	else if(percentage>=40 && percentage<60)
	printf("\n\ngrade is E\n\n");
	else
	printf("grade is F\n\n");
}

