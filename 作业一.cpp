#include <stdio.h>
int check_num(int x, int num[5])
{
	int a = 0, b = 0, i, A = 0;
	for (i = 0; i < 5; i++)
		a += num[i];
	for (i = 0; i < 5; i++)
		b += num[i] * num[i];
	for (i = 2; i < x; i++)
		if (x % i == 0)
			A++;
	for (i = 2; i < a; i++)
		if (a % i == 0)
			A++;
	for (i = 2; i < b; i++)
		if (b % i == 0)
			A++;
	return A;
}
void splitNum(int x, int num[5])
{
	int i = 0;
	while (x != 0)
	{
		num[i++] = x % 10;
		x /= 10;
	}
}
int main()
{
	int i, n, num[5], check = 0, sum = 0, k = 0;
	float average;
	for (n = 100; n <= 10000; n++)
	{
		check = 0;
		for (i = 0; i < 5; i++)
			num[i] = 0;
		splitNum(n, num);
		check = check_num(n, num);
		if (check == 0)
		{
			printf("%d\n", n);
			sum += n;
			k++;
		}
	}
	average = sum / k;
	printf("average: %f", average);
	return 0;
}
