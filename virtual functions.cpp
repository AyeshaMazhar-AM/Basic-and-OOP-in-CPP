#include<iostream>
using namespace std;

//base class
class instrument{
	public:
//	to make virtual function : write virtual
//	virtual void makesound()
//	{
//		cout<<"instrument playing";
//	}


//to make pure virtual function
    virtual void makesound () = 0;
};
//derived class
class accordian : public instrument 
{
    public:
	void makesound()
	{
		cout<<"acordian playing...\n";
	}	
};
class piano : public instrument 
{
	void makesound()
	{
		cout<<"piano playing...\n";
	}
};


int main()
{
	instrument* i1= new accordian();
//	i1->makesound();
	
	instrument* i2= new piano();
//	i2->makesound();
     
     instrument* instruments[2] = {i1, i2};
     for (int i=0; i<2; i++)
     instruments[i]->makesound();

}
