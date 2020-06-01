#include <bits/stdc++.h>
using namespace std;
std::vector<string> v;

string searchIn [] = {
	"prateek", "sneha", "deepak", "arnav", "shikha", "palak",
	"utkarsh", "divyam", "vidhi", "sparsh", "akku"
};

string keypad[11] = {"+", ",", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

void keypadCombinations(string input, string output) {

	if (input.length() == 0) {
		v.push_back(output);
		return;
	}

	int ch = input[0] - '0';
	string str = keypad[ch];
	string ros = input.substr(1);

	for (int i = 0; i < str.length(); ++i)
	{
		char include = str[i];
		keypadCombinations(ros, output + include);
	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;

	keypadCombinations(str, "");

	for (int i = 0 ; i < v.size(); i++)
	{
		for (int j = 0; j < 11; j++) {
			size_t found = searchIn[j].find(v[i]);
			if (found != string::npos)
				cout << searchIn[j] << endl;
		}
	}
	return 0;
}