#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T = 0;
	cin >> T;

	while (T--){
		string s;
		cin >> s;
		vector<string> str;
		for (int i = 0; i < s.length(); i = i + 2){
			str.push_back(s.substr(i, 2));
		}
		sort(str.begin(), str.end());

		for (int i = 0; i < str.size(); i++)
		{
			cout << str[i];
		}
		cout << endl;
	}
	return 0;
}