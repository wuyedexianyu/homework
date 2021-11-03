#include <stdio.h>
int main()
{
	int p, q, i, a = 1, b = 1, num = 0, A;
	printf("    p     q\n");
	for (p = 1; p <= 9; p++)
	{
		for (q = 1; q <= 9; q++)
		{
			a = 1;
			b = 1;
			A = 0;
			num = 0;
			for (i = 0; i < q; i++)
				a *= p;
			for (i = 0; i < p; i++)
				b *= q;
			num = a + b;
			for (i = 2; i < num; i++)
			{
				if (num % i == 0)
					A++;
			}
			if (A == 0)
				printf("%5d %5d\n", p, q);
		}
	}
}
