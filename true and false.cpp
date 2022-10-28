#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
		int N,K;
		cin>>N>>K;
		
		cout<<N-K<<endl;
	}
	return 0;
}
