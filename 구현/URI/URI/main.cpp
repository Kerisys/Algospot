#include <stdio.h>

int main()
{
	
	int C;
	scanf("%d", &C);
	while (C--){
		char s[81];
		scanf("%s", s);
		for (char* p = s; *p != 0; p++){
			if (p[0] == '%' && p[1] == '2')
			{
				p+=2;
				switch (p[0])
				{
				case '0':
					printf(" ");
					break;
				case '1':
					printf("!");
					break;
				case '4':
					printf("$");
					break;
				case '5':
					printf("%%");
					break;
				case '8':
					printf("(");
					break;
				case '9':
					printf(")");
					break;
				case 'a':
					printf("*");
					break;
				default:
					printf("%%2", p--);
					break;
				}
			}
			else
			{
				printf("%c", p[0]);
			}

		}
		printf("\n");
	}
	return 0;
}