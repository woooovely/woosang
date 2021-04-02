#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[10];
	int sel = 0;

	while (1) {
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			for (int i = 0; i < 10; i++)
			{
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for (int i = 0; i < 10; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			break;
		case 3:
			exit(sel);
			break;
		}
	}
}