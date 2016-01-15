#include <stdio.h>

int main()
{
	int T, N, C, M;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &N);
		C = 0;
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &M);
			if (i == M) C++;
		}
		printf("%d\n", C);
	}

	return 0;
}