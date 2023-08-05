#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"No of rows: ";
	cin>>n;
	
	for(int i = 1 ; i <= n ; i++)
	{
		int m = i;
		for(int j = i ; j >=1  ; j--)
		{
			cout<<m;
			m--;
		}
		cout<<endl;
	}
}
