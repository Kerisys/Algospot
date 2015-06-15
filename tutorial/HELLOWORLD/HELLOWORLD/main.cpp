#include <stdio.h>

int main()
{
	int C;
	scanf("%d", &C);
	while (C--)	{
		char s[50];
		scanf("%s", s);
		printf("Hello, %s!\n", s);
	}
	
	return 0;
}