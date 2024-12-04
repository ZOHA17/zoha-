#include<iostream>
#include<cstring>// used for string functions like addition of string or concatenation etc
using namespace std;
int main ()
{
	string str1="HELLO,";
	string str2="WORLD!";
	//string result= str1+ str2;// 
	 string result=str1.append(str2);
	cout<<result<<endl;
	return 0;
}