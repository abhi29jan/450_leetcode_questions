#include <bits/stdc++.h>
#include <string>
using namespace std;
void printDup(string str)
{
	map<char, int> count;
	for (int i = 0; i < str.length(); i++) {
		count[str[i]]++;
	}
	for (auto itr : count) {
		if (itr.second > 1)
			cout << itr.first << " ";
	}
};
int main()
{
	string str;
	getline(cin, str);
	printDup(str);
	return 0;
}
