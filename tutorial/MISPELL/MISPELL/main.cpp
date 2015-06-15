#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for(int i=1;i<=N;i++){
		int M;
		char word[81];
		scanf("%d%s", &M, word);
		word[M - 1] = '\0';
		printf("%d %s%s\n",i, word, &word[M] );
	}
	return 0;
}