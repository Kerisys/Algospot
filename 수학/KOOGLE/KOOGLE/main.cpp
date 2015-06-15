#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

	int C;
	scanf("%d", &C);
	while (C--)
	{
		long double max_strength = 0;
		int max_b=0;
		char s[1001], max_s[1001];
		int N;
		scanf("%d", &N);
		while (N--)
		{
			scanf("%s", s);
			int a = 0, b = 0;
			
			for (int i = 0, len = strlen(s); i < len; i++){
				if (s[i] >= 'a' && s[i] <= 'z') a++;
				if (s[i] >= '0' && s[i] <= '9') b++;
			}
			b = a + b;

			long double strength=1;
			while (a--){
				strength *= 2.6l;
				if (strength / 10 >= 1) {
					strength /= 10;
					b++;
				}
			};
			if (max_b < b || (max_b==b &&  max_strength < strength) )
			{
				max_strength = strength;
				max_b = b;
				strcpy(max_s, s);
			}
			else if (max_b == b)
			{
				if (fabs( max_strength - strength) <= 1e-9)
				{
					if (strcmp(max_s, s) > 0)
					{
						max_strength = strength;
						max_b = b;
						strcpy(max_s, s);
					}
				}
			}
		}
		printf("%s\n", max_s);
	}
	return 0;
}