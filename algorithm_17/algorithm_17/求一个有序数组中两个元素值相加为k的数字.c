#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int x;//表示一个数的下标
	int y;//表示另一个数的下标
}A;
A Array;
void FindIndex(int *a, int n, int add)
{
	int left = 0;
	int right = n - 1;
	int sum = 0;
	while (left <= right)
	{
		sum = a[left] + a[right];
		if (sum<add)
		{
			left++;
		}
		else if (sum>add)
		{
			right--;
		}
		else
		{
			Array.x = left;
			Array.y = right;
			break;
		}
	}
}

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	int add;
	printf("请输入K：");
	scanf("%d", &add);
	FindIndex(a, n, add);
	printf("%d %d\n", Array.x, Array.y);

	return 0;
}