#include <stdio.h>
int main()
{
	float a, x = 0, m, n, d = 0.000001;	
	printf("Please enter a number: ");
	scanf("%f", &a);
	m = 0;
	n = a;
	while (x * x - a > d || x * x - a < -d)
	{
		x = (m + n) / 2;
		if (x * x > a)
			n = x;
		else
			m = x;
	}
	printf("%f\n", x);
	return 0;
}
