#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	while (n--){
		char s[101];
		scanf_s("%s", s, 101);
		int len = strlen(s), i;
		for (i = 0; i < len; i = i + 2){
			printf("%c", s[i]);
		}
		for (i = 1; i < len; i = i + 2){
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
