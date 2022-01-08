#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c, d;
	printf("input four different numbers=");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a > b && a > c && a > d)
	{
		printf("%d is the greatest number", a);
	}
	else if (b > c && b > d)
	{
		printf("%d is the greatest number", b);
	}
	else if (c > d)
	{
		printf("%d is the greatest number", c);
	}
	else {
		printf("%d is the greatest number", d);
	}
}