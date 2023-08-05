#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"No of rows: ";
	cin>>n;
	
	for( int i = 1;i<=n;i++)
	{
		for(int j = 1; j <= n-i ; j++)
		{
			cout<<" ";
		}
		
		int m = 1;
		for(int k = 1 ; k <= i ; k++)
		{
			cout<<m;
			m++;
		}
		
		int o = i;
		for(int l = i ; l >=2  ; l--)
		{
			cout<<o-1;
			o--;
		}
		cout<<endl;
		
		return 0;
	}
}
