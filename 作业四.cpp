#include <stdio.h>
unsigned long long int check(unsigned long long int a)
{
	unsigned long long int i, A = 0;
	for (i = 2; i < a / 2; i++)
	{
		if (a % i == 0)
		{
			A++;
			break;
		}	
	}
	return A;
}
int main()
{
	unsigned long long int p, q, i, a = 1, b = 1, num = 0, A;
	printf("    p     q\n");
	for (p = 2; p <= 99999; p++)
	{
		A = check(p);
		if (A != 0)
			continue;
		for (q = p; q <= 99999; q++)
		{
			A = check(q);
			if (A != 0)
				continue;
			a = 1;
			b = 1;
			num = 0;
			for (i = 0; i < q; i++)
				a *= p;
			for (i = 0; i < p; i++)
				b *= q;
			num = a + b;
			A = check(num);
			if (A == 0)
				printf("%5lld %5lld\n", p, q);
		}
	}
	return 0;
}
