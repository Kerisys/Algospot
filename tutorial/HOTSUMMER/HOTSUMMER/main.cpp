#include <stdio.h>

int main() {
	int T;
	int sum, in, i;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &sum);
		for (i = 0; i < 9; i++){
			scanf("%d", &in);
			sum -= in;
		}
		printf(sum<0 ? "NO\n" : "YES\n");
	}
	return 0;
}