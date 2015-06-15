#include <stdio.h>
#include <vector>

bool isClose(char* s){
	std::vector<char> v;

	for (int p = 0; s[p] != '\0'; p++)
	{
		switch (s[p]){
		case ')':
			if (v.empty() || v.back() != '(') return false;
			v.pop_back();
			break;
		case '}':
			if (v.empty() || v.back() != '{') return false;
			v.pop_back();
			break;
		case ']':
			if (v.empty() || v.back() != '[') return false;
			v.pop_back();
			break;
		case '(': case '{': case '[':
			v.push_back(s[p]);
			break;
		}
	}
	return v.empty();
}

int main()
{
	int C;
	char s[10000];
	
	scanf("%d", &C);
	while (C--)
	{
		scanf("%s", &s);

		printf(isClose(s) ? "YES\n" : "NO\n");
	}
	return 0;
}