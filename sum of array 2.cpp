#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num[] = {3, 5, 6, 3};
	for(int i=0; i<4; i++)
	{
		sum += num[i];
	}
	cout<<"sum is : "<< sum;
}
