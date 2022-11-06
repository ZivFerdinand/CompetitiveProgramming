#include<stdio.h>
#include<iostream>
int main()
{
	double p;
	int n;

	scanf("%d %lf", &n, &p);
	for (int i = 0; i < n;i++)
	{
		double r, t;
		scanf("%lf %lf", &r, &t);
		t /= 12;

		p += (p * r * t) / 100;
	}

	printf("%.0lf", p);
}