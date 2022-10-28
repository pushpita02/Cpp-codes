#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
			if(a+b+c>=100)
			{
				if(a>=10)
				{
					if(b>=10)
					{
						if(c>=10)
						{
							cout<<"PASS"<<endl;
						}
						else
						{
							cout<<"FAIL"<<endl;
						}
					}
					else
					{
						cout<<"FAIL"<<endl;
					}
				}
				else
				{
					cout<<"FAIL"<<endl;
				}
			}
			else if(a+b+c<100)
			{
				cout<<"FAIL"<<endl;
			}
	}
	return 0;
}

