#include <stdio.h>

// true 1   false 0
#define nbit(x,n)			((x&bit[n]) == bit[n])
#define Check(x,a,b,c,d)	((nbit(x,a)^nbit(x,b)^nbit(x,c)^nbit(x,d))&1)

//// 입력 10진수로 0~15
//typedef unsigned char byte;
//byte bit[8] = { 128, 64, 32, 16, 8, 4, 2, 1 };
//// PrintByte(byte b, int n);

// 입력을 16진수로 0x0000000~0x1111111
typedef unsigned int byte;
int  bit[8] = { 0x10000000, 0x01000000, 0x00100000, 0x00010000,
				0x00001000, 0x00000100, 0x00000010, 0x00000001 };
// printf("%x",N);

void PrintByte(byte b, int n){ // b를 뒤에서 n자리 출력
	for (int i = 8 - n; i < 8; i++){
		printf("%d", nbit(b, i));
	}
}

byte Encoding(byte& b){	// 0~15(10) 0000~1111(2)
	byte r=0;
	r += (Check(b, 1, 4, 5, 7) ? bit[1] : 0);
	r += (Check(b, 2, 4, 6, 7) ? bit[2] : 0);
	r += bit[3] * nbit(b, 4);
	r += (Check(b, 3, 5, 6, 7) ? bit[4] : 0);
	r += bit[5] * nbit(b, 5);
	r += bit[6] * nbit(b, 6);
	r += bit[7] * nbit(b, 7);

	return r;
}

byte Decoding(byte b){ // 0~255(10) 00000000~11111111(2)
	byte e = (Check(b, 4, 5, 6, 7) << 2) + (Check(b, 2, 3, 6, 7) << 1) + Check(b, 1, 3, 5, 7);

	if (e > 0) 	b += (nbit(b, e) ? -bit[e] : bit[e]);

	byte r = 0;
	if (nbit(b, 3)) r += bit[4];
	if (nbit(b, 5)) r += bit[5];
	if (nbit(b, 6)) r += bit[6];
	if (nbit(b, 7)) r += bit[7];

	return r;
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--){
		byte N;
		
		scanf("%x", &N);
		printf("%04x\n", Decoding(N));

		//scanf("%d", &N);
		//PrintByte(Encoding(N), 8);
		//printf("\n");
		//
		//PrintByte(Decoding(N), 4);
		//printf("\n");
	}

	

	//byte n, de;
	//printf("Raw Message | Encoded Message\n"
	//	"------------|---------------\n");
	//for (n = 0; n < 16; n++) {
	//	PrintByte(Encoding(n), 7);
	//	printf(" | ");
	//	PrintByte(n, 4);
	//	printf("\n");
	//}
	return 0;
}