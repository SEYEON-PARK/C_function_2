#include <stdio.h>

int sum(int a, int b);

int main(void)
{
	int i, j, k;
	printf("���� 2���� �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &j, &k);

	i = sum(j, k);
	printf("�� ������ ���� %d�Դϴ�.\n", i);

	return 0;
}
int sum(int a, int b)
{
	return a + b;
}