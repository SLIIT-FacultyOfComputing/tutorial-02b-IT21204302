/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() 
{
	int n, r;
	std::cout << "Enter a value for n ";
	std::cin >> n;
	std::cout << "Enter a value for r ";
	std::cin >> r;
	std::cout << "nCr = ";
	std::cout << nCr(n, r);
	std::cout << std::endl;
}

long Factorial(int no)
{
	long fac;
	int  r;
	fac = 1;
	for (r = no; r >= 1; r--)
	{
		fac = fac * r;
	}
	return fac;
}

long nCr(int n, int r)
{
	long facN, facR, facNR, nCr;
	int  x;
	facN = 1;
	for (x = n; x >= 1; x--)
	{
		facN = facN * x;
	}

	facR = 1;
	for (x = r; x >= 1; x--)
	{
		facR = facR * x;
	}

	facNR = 1;
	for (x = (n - r); x >= 1; x--)
	{
		facNR = facNR * x;
	}

	nCr = facN / (facR * facNR);

	return nCr;
}
