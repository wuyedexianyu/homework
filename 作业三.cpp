#include <stdio.h>
int f(int n)
{
	int num = 0, a;
	while (n != 0)
	{
		a = n % 10;
		n /= 10;
		if (a == 1)
			num++;			
	}
	return num;
}
int main()
{
	int n, num, i, a = -1, b;
	for (i = 0; i < 9999999999; i++)
	{
		a++;
		b = f(i);
		a -= b;
		if (a == 0)
			printf("%d\n", i);
	}
	return 0;
}
