#include <iostream>

class Solution {
public:
	//使用loop的暴力解法
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