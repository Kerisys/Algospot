#include <stdio.h>
#include <string.h>


char month[13] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char* day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };


int main()
{
	int T;
	scanf("%d", &T);
	while (T--){
		int m, d,n[7];
		char s[11];
		scanf("%d %d %s", &m, &d, s);
		for (int i = 0; i < 7;i++){
			if (strcmp(s, day[i]) == 0){
				for (int j = 0; j < 7; j++){
					n[j] = d+j-i;
					if (n[j] <= 0){
						n[j] += month[m - 1];
					}
					else if (n[j] > month[m]){
						n[j] -= month[m];
					}
					printf("%d ", n[j]);
				}
				break;
			}
		}
		printf("\n");
	}
	return 0;
}