#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	
	for(int i = 1;i<=n; i++)
	{
		char alphabet = 'A';
		for(int j = 1; j<=n;j++)
		{
			cout<<alphabet;
			alphabet = alphabet + 1;	
		}
		cout<<endl;
	}
}
