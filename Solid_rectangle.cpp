#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the nuber of columns: ";
	cin>>n;
	
	int m;
	cout<<"Enter the nuber of rows: ";
	cin>>m;
	
	
	for(int i = 1; i<=m; i++)
	{
		for(int j = 1; j<=n; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
