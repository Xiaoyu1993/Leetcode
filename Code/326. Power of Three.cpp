#include <iostream>

class Solution {
public:
	//ʹ��loop�ı����ⷨ
	bool isPowerOfThree(int n) {
		if(!n)
			return false;
		while (n!=1)
		{
			if(n%3)
				return false;
			n = n/3;
		}
		return true;
	}
};