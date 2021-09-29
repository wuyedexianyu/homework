#include <stdio.h>
int main()
{
	float s, i = 0, r, d = 0.00000000000001;
	printf("Please enter a number: ");
	scanf("%f", &s);
	r = 1;
	while (i - r >= d || r - i >= d)
	{
		i = s / r;
		r = (r + i) / 2;
	}
	printf("%f\n", i);
	return 0;
}
