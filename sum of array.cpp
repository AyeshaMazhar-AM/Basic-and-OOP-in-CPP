#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int a[] = {3, 2, 1, 5, 4};
	for (auto x: a)
	{
		sum += x;
	}
	cout<<"sum is : "<<sum;
	return 0;
}
