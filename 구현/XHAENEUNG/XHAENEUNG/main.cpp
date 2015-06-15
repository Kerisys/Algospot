#include <iostream>
#include <string>
using namespace std;

string num[11] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };

int ctoi(string s){
	for (int i = 0; i < 11; i++){
		if (num[i].compare(s) == 0) return i;
	}
	return -1;
}

bool Cal(string s[5])
{
	int r;
	switch (*s[1].c_str()) {
	case '+':
		r = ctoi(s[0]) + ctoi(s[2]);
		break;
	case '-':
		r = ctoi(s[0]) - ctoi(s[2]);
		break;
	case '*':
		r = ctoi(s[0]) * ctoi(s[2]);
		break;
	default:
		return false;
		break;
	}

	if (r < 0 || r > 10 || s[4].length() != num[r].length()) return false;

	for (int i = 0; i < num[r].length(); i++){
		size_t found = s[4].find_first_of(num[r].at(i), i);
		if (found != string::npos) {
			if (i == found) continue;

			swap(s[4][i], s[4][found]);
		}
		else {
			return false;
		}
	}
	return true;
}


int main()
{
	int T;
	cin >> T;
	while (T--){
		string in[5];
		for (int i = 0; i < 5; i++){
			cin >> in[i];
		}

		cout << (Cal(in) ? "Yes\n" : "No\n");
	}
	return 0;
}