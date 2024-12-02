#include<iostream>
using namespace std;
int main ()
{
	double password, pass;
	string username,admin;
	int choice;
	cout<<"                 *******************************************************"<<endl;
	cout<<"                 *                                                     *"<<endl;
	cout<<"                 *     WELCOME TO LAVISH LAIR HOTELS ONLINE PORTAL     *"<<endl;
	cout<<"                 *                                                     *"<<endl;
	cout<<"                 *******************************************************"<<endl;
	cout<<"Please verify that you are an authentic user: "<<endl;
	cout<<"Enter the username: "<<endl;
	cin>>username;
	if (username=="LAVISHLAIR")
	{
		cout<<"Enter the password"<<endl;
		cin>>password;
		if (password==7468)
		{
		  cout<<"Login successfully ! "<<endl;
		  cout<<"          MENU: "<<endl;
		  cout<<"Press 1 for ADMIN services "<<endl;
	cout<<"Press 2 for STAFF services "<<endl;
	cout<<"Press 3 for CUSTOMER services "<<endl;
	cout<<"Press 4 to EXIT "<<endl;
	cin>>choice;
	if (choice==1)
	{
		cout<<"Please proove your identity as ADMIN: "<<endl;
		cout<<"Enter your username: "<<endl;
		cin>>admin;
		cout<<"Enter your password: "<<endl;
		cin>>pass;
		if (admin=="ZOHAFATIMA" && pass==2004)
		{
			char choice;
			cout<<"     ADMIN PORTAL:"<<endl;
			cout<<"Enter S for staff Managment"<<endl;
			cout<<"Enter G for Guest Management"<<endl;
			cout<<"Enter E to Exit "<<endl;
			cin>>choice;
			switch(choice)
				case 'A':
					string choice;
					cout<<"ADD staff:"<<endl;
					cout<<"Remove staff:"<<endl;
					cout<<"SHIFT scheduling:"<<endl;
					cout<<"VIEW staff details:"<<endl;
					cout<<"PAYROLL processing:"<<endl;
					cin>>choice;
					
					
					
					
					
		}
	}
		  
		}
		else 
		{
			cout<<"Incorrect Password!"<<endl;
		}
	
	}
		else 
		{
			cout<<"Login Declined! Incorrect Username."<<endl;
		}
	return 0;
	
}