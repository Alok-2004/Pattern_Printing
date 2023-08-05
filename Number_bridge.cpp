#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	
	for(int i = 1; i<=2*n-1; i++)
	{
		cout<<i;
	}
	cout<<endl;
	
	int m = n-1;
	for(int i = 1; i<=m; i++)
	{
		int o=1;
		for(int l = 1; l<=m-i+1; l++)
		{
			cout<<o;
			o++;
			
		}
		
		for(int k = 1; k<= 2*i - 1; k++)
		{
			cout<<" ";
			o++;
		}
		
		for(int j = 1; j<=m-i+1; j++)
		{
			cout<<o;
			o++;
		}
		
		cout<<endl;
	}
	return 0;
}
