// Method number 1

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
//		int number;
//		if ( i == 1 || (i%2!=0)) number = 1;
//		else  number = 0;
//		for(int j = 1; j<=i; j++)
//		{
//			cout<<number<<" ";
//			if ( number == 1) number = 0;
//			else number = 1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}


// Method number 2

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Give the number of rows/column: ";
	cin>>n;
	
	
	for (int i = 1;i<=n;i++)
	{	
		for(int j = 1; j<=i; j++)
		{	
			if ( (i + j)%2 == 0) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
