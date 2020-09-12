#include <stdio.h>

int sum(int a, int b);

int main(void)
{
	int i, j, k;
	printf("정수 2개를 입력하시오. : ");
	scanf_s("%d %d", &j, &k);

	i = sum(j, k);
	printf("두 정수의 합은 %d입니다.\n", i);

	return 0;
}
int sum(int a, int b)
{
	return a + b;
}