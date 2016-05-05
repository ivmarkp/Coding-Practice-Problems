#include<iostream>
using namespace std;
int main()
{
	int number;
	while(!0){
		cin>>number;
		if(number==42||number>99||number<-99)
		break;
		else 
		cout<<number<<endl;
	}
	return 0;
}
