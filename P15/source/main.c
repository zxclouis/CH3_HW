#include <stdio.h>
#include <stdlib.h>
int maximun(int x,int y,int z);
int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("enter the integers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("maximun is:%d\n", maximun(num1, num2, num3));
	system("pause");
	return 0;
}
int maximun(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}