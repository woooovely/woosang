#include <stdio.h>

int main()
{
	int num;

	printf("구구단 단 수를 입력하세요: ");
	scanf("%d", &num);

	for (int i = 0; i <= 9; i++)
	{
		printf("%d*%d=%d\n", num, i, num * i);
	}

	return 0;
}