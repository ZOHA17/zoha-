#include<iostream>
using namespace std;
int main ()
{
  // 5! 5*4*3*2*1=120; long datatype mai 4 digits atay hain! -ve range say lay kr +ve tak values jati hain
 int n,i=1;
 long factorial= 1.0;
 cout<<"Enter a number to find the factorial "<<endl;
 cin>>n;
 do
 {
 factorial*=i;
 i++;	
 }
 while (i<=n);
 cout<<"The factorial of "<<n<<"! = "<<factorial;
	
	return 0;
}