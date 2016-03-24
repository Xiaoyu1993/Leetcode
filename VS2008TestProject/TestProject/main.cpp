#include <iostream>
#include "../../Code/326. Power of Three.cpp"
#include <string>

using namespace std;

int main()
{
	int number;
	scanf("%d",&number);
	while(number)
	{
		Solution s;
		if(s.isPowerOfThree(number))
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d",&number);
	}

	system("pause");
	return 0;
}