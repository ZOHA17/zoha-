#include<iostream>
using namespace std;
void passbyvalue(int num)
{
	num=num+10;
	cout<<"Inside Function (passbyvalue): "<<num<<endl;

}
int substract(int m, int n)
{
	
	int sub1=m-n;
	return sub1;
}
int multiply (int a, int b)
{
	 int num=a*b;
	return num;
	
}
int main ()
{
	int number=5;
	cout<<"Before function call: "<<number<<endl;
	passbyvalue(number);
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	int g=substract (a,b);
	cout<<"Substraction is "<<g<<endl;
	int f=multiply(a,b);
	cout<<"Product is "<<f<<endl;
	
	return 0;
}
