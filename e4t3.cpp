#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char ma[MAX] = { 0 };
	char su[MAX] = { 0 };
	char cou[MAX] = { 0 };       //三个字符数组依次定义主串、子串、计数串。
	scanf("%s", ma);
	scanf("%s", su);
	int len1 = strlen(ma);
	int len2 = strlen(su);
	int count = 0;
	for (int i = 0; i < len1 - len2; i++)
	{

		for (int j = 0; j < len2; j++)
		{
			cou[j] = ma[i + j];
		}
		for (int j = 0; j < len2; j++)
		{
			if (cou[j] == su[j])
			{
				count++;
				if (count == len2)
				{
					printf("%d", i);
					goto stop;
				}
				continue;
			}
			else break;
		}

	}

	printf("-1");
stop:
	return 0;
}