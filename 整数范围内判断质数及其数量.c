#include<stdio.h>
int main()
{
	int Start, End;
	printf("��������������:");
	scanf_s("%d %d", &Start, &End);

	int isPrime[101];   //�ӡ�0������100���С�101�����������������СΪ��101����������Ҫ����Ϊ���ֱ�����ĿҪ��2-100��������Ҫ������100����Ҫ��������101��Ԫ�أ���������0����Ӧ�ĵ�һ�����֣�������100����Ӧ��һ����һ������
	for (int i = 0; i < 101; i++) {       //forѭ���涨��1��Ϊ��������0��Ϊ������
		isPrime[i] = 1;//���������е�����Ԫ�ؾ�Ϊ��1��
	}

	isPrime[0] = 0;//��0��Ϊ����
	isPrime[1] = 0;//��1��Ϊ����

	for (int i = 2;i <= 10; i++) {
		if (isPrime[i] == 1) {
			for (int j = i * i; j <= 100; j += i) {
				isPrime[j] = 0;
			}
		}
	}

	int count = 0;
	for (int num = Start; num <= End; num++) {
		if (isPrime[num] == 1) {
			printf("%d\n", num);
			count++;
		}
	}
	printf("��������Ϊ%d\n", count);

	return 0;

 }























