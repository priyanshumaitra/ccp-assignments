// Q03. Addition, Subtract and Multiplication of two matrices of size 3X3

#include<iostream>
using namespace std;

int main()
{
	int m1[3][3],  m2[3][3], add[3][3], mul[3][3], sub[3][3];
	int i, j, k;
	cout << "Enter elements of 1st matrix: \n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			cin >> m1[i][j];
	}
	cout << "Enter elements of 2nd matrix: \n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			cin >>  m2[i][j];
	}
	cout<<"Addition of the matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			add[i][j] = m1[i][j] +  m2[i][j];
			cout << add[i][j] << "\t";
		}
		cout << "\n";
	}
	cout<<"Subtraction of the matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sub[i][j] = m1[i][j] - m2[i][j];
			cout<< sub[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Multiplication of the Matrices are:\n";
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			mul[i][j] = 0;
			for(k = 0; k < 3; k++)
				mul[i][j] += m1[i][k] * m2[k][j];
		}
	}
	for(i = 0; i < 3 ; i++)
	{
		for(j = 0; j < 3; j++)
			cout << mul[i][j] <<"\t";
		cout<< "\n";
	}
    return 0;
}