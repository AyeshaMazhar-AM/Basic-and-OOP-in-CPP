#include <iostream>
using namespace std;

template <class T>
class calculate{
	public:
	T a;
	T b;
	
	T add()
	{
		return a+b;
	}
	T sub()
	{
		return a-b;
	}
	T multiply()
	{
		return a*b;
	}
	T divide()
	{
		return a/b;
	}
};


int main()
{
	calculate<float> c1 = calculate<float> {13.5, 24.6};
	cout<<"add : "<<c1.add();
	
	
	
}
