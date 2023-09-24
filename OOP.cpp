#include<iostream>
using namespace std;
class car{
	public:
	string model;
	int price;
	string color;
		car(string m, int p, string c)
		{
		 model = m;
		 price= p;
		 color = c;
		}
};
int main()
{
	car toyota = car("hh",500, "white");
	cout<<toyota.price;
	
}

