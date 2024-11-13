#include<iostream>
using namespace std;
int main()
{
 int rows, columns;
 int sum=0;
 int average=0;
 cout<<"Enter the number of rows :"<<endl;
 cin>>rows;
 cout<<"Enter the number of columns: "<<endl;
 cin>>columns;
 int arr[rows][columns]; //dECLARATION OF 2d ARRAY
 cout<<"Enter the elments ;\n"<<endl;
 for (int i=0; i<rows; i++)
 {
 	for (int j=0; j<columns; j++)
 	{
 		cout<<"Element ["<<i<<"]["<<j<<"] :";
 		cin>>arr[i][j];
 		sum+=arr[i][j];
 		average=sum/arr[i][j];
	 }
	
	
	
 }
 //Display the 2D array
 cout<<"\The 2D array is :\n";
 for (int i=0; i<rows; i++)
 {
 	for (int j=0; j<columns; j++)
 	{
 	cout<<arr[i][j]<<" ";
 	
 	}
 	cout<<endl;
 	cout<<"The sum is "<<sum<<endl;
 	cout<<"The average is "<<average<<endl;
 }
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}