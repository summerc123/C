#include<stdio.h>
int main()
{
	float a, b, c;
	printf("请输入三角形的三条边长:");//变量必须赋值才能使用！！！
	scanf_s("%f %f %f", &a, &b, &c);

	if (a + b < c || a + c < b || b + c < a)
	{
		printf("所输入的三条边长不构成三角形\n");
	}

	else if (a == b && a == c)
	{
		printf("所输入的三条边构成等边三角形");
	}
	else if (a == b || a == c || b == c)
	{
		printf("三角形为等腰三角形\n");
	}
	else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
	{
		printf("三角形为直角三角形\n");
	}
	else
	{
		printf("为普通三角形");
	}

	return 0;
}


