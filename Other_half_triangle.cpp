// Method 1

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cout<<"Give the number of rows/column: ";
//	cin>>n;
//	
//	
//	for (int i = 1;i<=n;i++)
//	{	
//		for(int j = 1; j<=n; j++)
//		{
//			if ((i+j)==n+1 || (i+j)>=n+1) cout<<"*";
//			else cout<<" ";	
//		}
//		cout<<endl;
//	}
//	return 0;
//}


// Method 2

#include<iostream>
using namespace std;
 
int main()
{
	int n;
	cout<<"Enter the number of row||column: ";
	cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		//spaces
		for(int j = 1;j<=n-i;j++)
		{
			cout<<" ";
		}
		//star
		for (int k = 1; k<=i;k++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}
