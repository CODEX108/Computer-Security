#include <stdio.h>
//finding square root using heron's formula
/*Note that the function returns the square root of n.  */
double squareRoot(double n)
{
	/*We are using n itself as initial approximation
This can definitely be improved */
	double x = n;
	double y = 1;
	double e = 0.000001; /* e decides the accuracy level*/
	while (x - y > e) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}


int main()
{
	int n = 10;
	printf("Square root of %d is %lf", n, squareRoot(n));
	return 0;
}
