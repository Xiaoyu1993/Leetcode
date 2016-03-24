#include <iostream>
#include <cmath>

class Solution {
public:
	//If log10(n) / log10(3) returns an int 
	//(more precisely, a double but has 0 after decimal point)
	//then n is a power of 3
	bool isPowerOfThree(int n) {
		if(n <= 0)
			return false;
		if(n == int(pow(3.0,int((log10(double(n))/log10(3.0))))))
			return true;
		else
			return false;
	}
};