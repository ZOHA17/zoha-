#include<iostream>
using namespace std;
int main ()
{
	int n;
 long factorial= 1.0;
 cout<<"Enter a number to find the factorial "<<endl;
 cin>>n;
 for (int i=1; i<=n; i++)
 {
 	factorial*=i;
 }
 cout<<"The factorial of "<<n<<"! = "<<factorial;
	
	
	
	
	
	return 0;
}