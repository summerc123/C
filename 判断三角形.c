#include<stdio.h>
int main()
{
	float a, b, c;
	printf("�����������ε������߳�:");//�������븳ֵ����ʹ�ã�����
	scanf_s("%f %f %f", &a, &b, &c);

	if (a + b < c || a + c < b || b + c < a)
	{
		printf("������������߳�������������\n");
	}

	else if (a == b && a == c)
	{
		printf("������������߹��ɵȱ�������");
	}
	else if (a == b || a == c || b == c)
	{
		printf("������Ϊ����������\n");
	}
	else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
	{
		printf("������Ϊֱ��������\n");
	}
	else
	{
		printf("Ϊ��ͨ������");
	}

	return 0;
}


