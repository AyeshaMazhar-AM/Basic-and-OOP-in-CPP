#include <iostream>
#include <fstream>
using namespace std;

class user{
	private:
	string name;
	int password;
	
	public:
		
	double balance = 0;
			
	user (string a , int b)
	{
		name= a;
		password = b;
	}
	
	bool checkusername (string nam)
	{
		if (nam == name) { cout<<"correct user name"<<endl; 
		return 1;}
		else { cout<<"invalid username"<<endl; 
		return 0;}
	}
	
	bool checkpassword (int pass)
	{
	    if (pass == password) { cout<<"correct password"<<endl; 
		return 1;}
		else { cout<<"incorrect password"<<endl; 
		return 0;}
	}
	void savedata()
	{
		ofstream userfile("ATM.txt");
		
		userfile<<"username : "<<name<<endl<<"password : "<<password<<endl<<"balance : "<<balance<<endl;
		userfile.close();
	}
	
};

int startmenu()
{
    cout<<endl<<"** Main Menu **"<<endl;
    cout<<"1.Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.withdrawel"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"selection: "<<endl;
    
    int op;
    cin>>op;
    return op;
}

int main()
{
	user u1 ("ayesha" , 1234);
	cout<<endl<<"*** Welcome to ATM ***"<<endl;
	string n;
	int p;
	start:
	cout<<"enter user name"<<endl;
	cin>>n;
	cout<<"enter password"<<endl;
	cin>>p;
	if(u1.checkusername(n) && u1.checkpassword(p))
	{
	
	{
		open:
		int i;
		i = startmenu();
		switch (i)
		{
		case 1: {
		cout<<"your current balance is : "<< u1.balance << endl; 
		break;
		}
		
	    case 2:
	    {
	    double dep;
	    cout<<"enter amount to deposit : ";
	    cin>>dep;
	    u1.balance += dep;
	    break;
		}	
		
	    case 3:
	    {
	    double wd;
	    cout<<"enter amount to withdraw : ";
	    cin>>wd;
	    if (wd > u1.balance){
	    	cout<<"not sufficient amount"<<endl;
		}
		else
		u1.balance -=wd;
		break;
		}
		
	    case 4:	
	    break;	
	}
}
	
	cout<<endl<<"Press 1 to continue or 2 to exit : "<<endl;
	cout<<"1.continue"<<endl;
	cout<<"2.exit"<<endl;
	cout<<"selection : ";
	int in;
	cin>>in;
	
	if( in==1)
	{
	system("cls");
	goto open;
	}
}

	u1.savedata();
}
