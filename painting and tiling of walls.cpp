#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x1, y1, x2, y2, sum1, sum2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    sum1=x1+y1;
	    sum2=x2+y2;
	    
	    if(sum1>sum2)
	    {
	        cout<<sum2<<endl;
	    }
	    else if(sum1<sum2)
	    {
	        cout<<sum1<<endl;
	    }
	    else if(sum1=sum2)
	    {
	        cout<<sum1<<endl;
	    }
	    
	}
	return 0;
}

