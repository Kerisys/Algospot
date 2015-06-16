//#include <stdio.h>
//
//// true 1   false 0
//
//int nbit[8] = { 0x10000000, 0x01000000, 0x00100000, 0x00010000,
//0x00001000, 0x00000100, 0x00000010, 0x00000001 };
//
//#define NBIT(x)			((n&nbit[x]) == nbit[x])
//#define Check(a,b,c,d)	NBIT(a) ^ NBIT(b) ^ NBIT(c) ^ NBIT(d)
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--){
//		int n, e = 0;;
//		scanf("%x", &n);
//
//		if (Check(1, 3, 5, 7)) e += 1; // 001(2)
//		if (Check(2, 3, 6, 7)) e += 2; // 010(2)
//		if (Check(4, 5, 6, 7)) e += 4; // 100(2)
//
//		if (e > 0)
//			n += (NBIT(e) ? -nbit[e] : nbit[e]);
//
//		printf("%d%d%d%d\n", NBIT(3), NBIT(5), NBIT(6), NBIT(7));
//	}
//	return 0;
//}