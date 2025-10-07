#include<stdio.h>
int main()
{
	int Start, End;
	printf("请输入两个整数:");
	scanf_s("%d %d", &Start, &End);

	int isPrime[101];   //从“0”到“100”有“101”个数，所以数组大小为“101”（我们需要索引为数字本身，题目要求2-100，所以想要有索引100就需要有数组有101个元素），索引“0”对应的第一个数字，索引“100”对应第一百零一个数字
	for (int i = 0; i < 101; i++) {       //for循环规定“1”为素数，“0”为非素数
		isPrime[i] = 1;//现在数组中的所有元素均为“1”
	}

	isPrime[0] = 0;//“0”为素数
	isPrime[1] = 0;//“1”为素数

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
	printf("素数总数为%d\n", count);

	return 0;

 }























