#include <stdio.h>

typedef unsigned char byte;

#define convert(n) ((byte)(n)) << 24 | ((byte)((n) >> 8)) << 16 | ((byte)((n) >> 16)) << 8 | ((byte)((n) >> 24))

int main()
{
	int c, i;
	unsigned int n;

	scanf("%d", &c);

	for (i = 0; i < c; i++){
		scanf("%u", &n);

		printf("%u\n", convert(n));
	}
	return 0;
}