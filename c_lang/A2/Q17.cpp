//Q17.Write a C program to find all roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2,real,imag;
	printf("Enter Value of a: ");
	scanf("%f",&a);
	printf("Enter Value of b: ");
	scanf("%f",&b);
	printf("Enter Value of c: ");
	scanf("%f",&c);
	//Discriminant
	d=(b*b)-(4*a*c);
	if(d==0)
	{
	printf("Roots are Real and Equal\n");
	r1=-(b/2*a);
	
	r2=r1;
	printf("First Root is: %.2f\n",r1);
	printf("Second Root is: %.2f\n",r2);
	}
	else if(d>0)
	{
	printf("Roots are Real\n");
	r1=(-b+ sqrt(d))/2*a;
	r2=(-b- sqrt(d))/2*a;
	printf("Root one = %.2f\n",r1);
	printf("Root two = %.2f\n",r2);
	}
	else if(d<0)
	{
	printf("\nRoots are Imaginary\n\n");
	real=-b/(2*a);
	imag= sqrt(-d)/(2*a);
	printf("Root one: %.2f+i%.2f\n",real,imag);
	printf("Root two: %.2f-i%.2f\n",real,imag);
	}

}