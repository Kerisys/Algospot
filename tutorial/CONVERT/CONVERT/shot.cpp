//#include <stdio.h>
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++){
//		float f;
//		char c[3];
//		scanf("%f %s", &f, c);
//
//		if (c[0] == 'k')
//			printf("%d %.4f lb\n", i, 2.2046*f);
//		if (c[0] == 'g')
//			printf("%d %.4f l\n", i, 3.7854*f);
//		if (c[1] == 'b') 
//			printf("%d %.4f kg\n", i, 0.4536*f);
//		else if(c[0] == 'l') 
//			printf("%d %.4f g\n", i, 0.2642*f);
//	}
//	return 0;
//}