#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y, z;
	printf("�п�J�T�����:");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x + y > z&&x + z > y&&y + z > x)
	{
		printf("�i�����T����");
	}
	if (x + y <= z&&x + z <= y&&y + z <= x)
	{
		printf("���i�����T����");
	}
	
	system("pause");
	return 0;
}
