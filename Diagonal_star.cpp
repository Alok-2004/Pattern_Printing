#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Give the number of rows/column: ";
	cin>>n;
	int mid = (n/2) + 1;
	
	for (int i = 1;i<=n;i++)
	{
		for(int j = 1; j<=n; j++)
		{
			if(j == i || j + i== n+1) cout<<"*";
			else  cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
