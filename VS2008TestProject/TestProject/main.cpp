#include <iostream>
#include "../../Code/345. Reverse Vowels of a String.cpp"
#include <string>

using namespace std;

int main()
{
	string s = "aA";
	//cout << s << endl;
	Solution reverse;
	s = reverse.reverseVowels(s);
	cout << s << endl;

	system("pause");
	return 0;
}