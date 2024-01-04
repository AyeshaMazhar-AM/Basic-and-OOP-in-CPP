#include<iostream>
using namespace std;

class equilateraltriangle{
	private:
	float a;
	float circumference;
	float area;
	
	public:
	void set(float length)
	{
	a = length;
	circumference = a*3;
	area = (1.73 *a*a) /4;
	}
//	friend void printresult(equilateraltriangle et);
    
	
	friend class work ;
};
//friend class
class work{
	public:
//	now put global function in it
//global function
void printresult(equilateraltriangle et){
	cout<<"circumference = "<<et.circumference<<endl;
	cout<<"area = "<<et.area;

}
};

int main()
{
	equilateraltriangle et;
	et.set(3);
	work w;
	w.printresult(et);

}
