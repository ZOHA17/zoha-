#include<iostream>
using namespace std;
void passbyvalue(int num)
{
	num=num+10;
	cout<<"Inside Function (passbyvalue): "<<num<<endl;

}
int main ()

{
	int number=5;
	cout<<"Before Function call :"<<number<<endl;
	passbyvalue(number);
	cout<<"Aftre function call :"<<number<<endl;
	return 0;
}
