#include<iostream>
using namespace std;
float add(float a, float b)
{
	return a+b;
};
float sub(float a, float b)
{
	return a-b;
};
float mul(float a, float b)
{
	return a*b;
};
float div(float a, float b)
{
	return a/b;
};
int main()
{
	float a,b,answer;
	cout<<"welcome to our calculator"<<endl;
	cout<<"enter a"<<endl;
	cin>>a;
	cout<<"enter b"<<endl;
	cin>>b;
	
	cout<<"press A for add, press S for sub, press M for mul, press D for div"<<endl;
	
	char input;
	cin>>input;
	
	switch(input)
	{
		case 'A':
		answer=add(a,b);
		break;
		
		case 'S':
		answer=sub(a,b);
		break;
		
		case 'M':
		answer=mul(a,b);
		break;
		
		case 'D':
		answer=div(a,b);
		break;
	}
	cout<<"your answer is : "<<answer<<endl;
}
