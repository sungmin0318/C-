#include <stdio.h>
//https://www.acmicpc.net/problem/2292
int main()
{
	int input;
	int i = 0;
	scanf_s("%d", &input);
	int end(int abc);
	int start(int abc);
	while (1)
	{
		if (input == 1)
		{
			printf("1");
			break;
		}
		else if (input>start(i) && input <= end(i))
		{
			printf("%d",i);
			break;
		}
		i++;
	}
}
int end(int abc)
{
	int j = 0;
	for (int i = 0;i < abc;i++)
	{
		j += i;
	}
	return j*6+1;
}
int start(int abc)
{
	int j = 0;
	for (int i = 0;i < abc-1;i++)
	{
		j += i;
	}
	return j * 6 + 1;
}