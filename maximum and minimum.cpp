#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	
	if(n1>n2)
	{
		cout<<"Maximum="<<n1;
		cout<<"Minimum="<<n2;
	}
	else
	{
		cout<<"Maximum="<<n2;
		cout<<"Minimum="<<n1;
	}
	return 0;
}
