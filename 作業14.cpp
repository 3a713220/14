#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y, z;
	printf("請輸入三個邊長:");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x + y > z&&x + z > y&&y + z > x)
	{
		printf("可拼成三角形");
	}
	if (x + y <= z&&x + z <= y&&y + z <= x)
	{
		printf("不可拼成三角形");
	}
	
	system("pause");
	return 0;
}
