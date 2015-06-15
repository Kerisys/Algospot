#include <stdio.h>
#include <string.h>

#define kgTOlb(n)	2.2046*n
#define lbTOkg(n)	0.4536*n
#define lTOg(n)		0.2642*n
#define gTOl(n)		3.7854*n

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++){
		float f;
		char oper[3];
		scanf("%f %s", &f, oper);

		if (strcmp(oper, "kg") == 0) {
			printf("%d %.4f lb\n", i, kgTOlb(f));
		}
		else if (strcmp(oper, "lb") == 0) {
			printf("%d %.4f kg\n", i, lbTOkg(f));
		}
		else if (strcmp(oper, "l") == 0) {
			printf("%d %.4f g\n", i, lTOg(f));
		}
		else if (strcmp(oper, "g") == 0){
			printf("%d %.4f l\n", i, gTOl(f));
		}
	}
	return 0;
}