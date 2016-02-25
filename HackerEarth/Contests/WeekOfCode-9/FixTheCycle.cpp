#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f,p;
	cin>>a>>b>>c>>d>>e>>f;
	
	int sum1 = a+b+c+d;
	int sum2 = a+d+e;
	int sum3 = a+b+f;
	int temp = min(min(sum1,sum2),sum3);		
	
	if(temp<=0) 
	{
		p = -temp;
		cout<<p;		
	}
	else
		cout<<0;
	return 0;
}
