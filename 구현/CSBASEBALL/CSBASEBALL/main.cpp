#include <stdio.h>

int main()
{
	int T, A, B;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &A, &B);
		
		printf("%d\n", (A > B ? 0 : 4 + B - A));
	}

	return 0;
}