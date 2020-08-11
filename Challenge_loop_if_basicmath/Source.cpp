#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, i,n=0;
	double tt = 0, tt_pow = 0,sd;
	scanf_s ("%d %d", &a, &b);
	if (a > b)
	{
		for (i = a; i>=b; i--)
		{
			printf("%d ", i);
			tt += i;
			tt_pow += pow(i, 2);
			n++;
		}
	}
	else
	{
		for (i = a; i<=b; i++)
		{
			printf("%d ", i);
			tt += i;
			tt_pow += pow(i, 2);
			n++;
		}
	}
	printf("\nAverage = %.1lf",tt/n);
	sd = sqrt((n * (tt_pow)-pow(tt, 2)) / (n * (n - 1)));
	printf("\nSD = %.2lf", sd);
	return 0;
}