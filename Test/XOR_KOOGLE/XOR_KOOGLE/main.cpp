#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

#define TEST_CASE 13

int main()
{
	while (true)
	{
		int a = 0, b = 0;
		///////////////////////////////////////////////////////////////
		// a, b 입력
		scanf("%d %d", &a,&b);
		///////////////////////////////////////////////////////////////
		//// string 입력
		//char s[1001];
		//scanf("%s", s);
		//for (int i = 0, len = strlen(s); i < len; i++){
		//	if (s[i] >= 'a' && s[i] <= 'z') a++;
		//	if (s[i] >= '0' && s[i] <= '9') b++;
		//}
		///////////////////////////////////////////////////////////////
		int c = a + b;

		long double strength = 1.0l;
		for(int i=0; i<a; i++){
			strength *= 2.6l;
			if (strength / 10 >= 1) {
				strength /= 10;
				c++;
			}
		}
		printf("Strength[%3d,%3d] [%3d] : %f\n", a, b,c, strength*pow(10.0, c));
		///////////////////////////////////////////////////////////////
	}
	
	
	return 0;
}