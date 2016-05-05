#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	string reverseVowels(string s) {
		string::iterator start = s.begin();
		string::iterator end = s.end();
		end--;
		bool flags = false, flage = false;
		while(((!flags) || (!flage)) && (start < end))
		{
			if((*start!='a') && (*start!='e') && (*start!='i') && (*start!='o') && (*start!='u') && (*start!='A') && (*start!='E') && (*start!='I') && (*start!='O') && (*start!='U'))
			{
				start ++;
				flags = false;
			}else
				flags = true;
			if((*end!='a') && (*end!='e') && (*end!='i') && (*end!='o') && (*end!='u') && (*end!='A') && (*end!='E') && (*end!='I') && (*end!='O') && (*end!='U'))
			{
				end --;
				flage = false;
			}else
				flage =true;

			if(flags && flage)
			{
				//cout << *start << " " << *end << endl;
				char temp = *start;
				*start = *end;
				*end = temp;
				flags = false;
				flage = false;
				start ++;
				end --;
			}
		}
		return s;
	}
};