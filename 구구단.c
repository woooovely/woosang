#include <stdio.h>

int main()
{
	int num;

	printf("������ �� ���� �Է��ϼ���: ");
	scanf("%d", &num);

	for (int i = 0; i <= 9; i++)
	{
		printf("%d*%d=%d\n", num, i, num * i);
	}

	return 0;
}