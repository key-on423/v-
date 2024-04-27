#include <stdio.h>

int main()
{
	int x, y;
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d * %d =%2d  ", y, x, x * y);
		}
		printf("\n");
	}
	printf("\n");
	//表达2.0↓
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d * %d =%2d  ", x, y, x * y);
		}
		printf("\n");
	}
	printf("\n");
	//表达3.0↓
	for (x = 9;x>=1;x--)
	{
		for (y = 9;y >= x;y--)
		{
			printf("%d * %d =%2d  ", x, y, x * y);
		}
		printf("\n");
	}
	printf("\n");
	//表达4.0
	for (x = 9;x >= 1;x--)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d * %d =%2d  ", x, y, x * y);
		}
		printf("\n");
	}
	printf("\n");
	printf("INTRESTING!\n");
	return 0;
}