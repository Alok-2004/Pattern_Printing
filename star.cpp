#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	// Method 1
	
	/*for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j<=n-i; j++)
		{
			cout<<" ";
		}
		
		for(int k = 1; k<=(2*i -1); k++)
		{
			cout<<"*";
		}
		
		cout<<endl; 
	}
	
	for(int i = n+1; i<= 2*n - 1; i++)
	{
		for(int j = 1; j<=i-n; j++)
		{
			cout<<" ";
		}
		
		for(int k = 1; k<= 2*n - 1 - 2*(i-n); k++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	*/
	
	
	// Method 2
	
	int nst = 1;
	int nsp = n-1;
	
	for(int i = 1; i<=2*n-1; i++)
	{
		//Spaces
		for(int j = 1; j<=nsp; j++)
		{
			cout<<" ";
		}
		
		if(i<n-1) nsp--;
		else nsp++;
		
		//Star
		
		for(int k = 1; k<=nst; k++)
		{
			cout<<"*";
		}
		
		if(i<=n-1) nst+=2;
		else nst-=2;
		cout<<endl;
	}
}
