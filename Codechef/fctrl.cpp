#include<iostream>
#include<stdio.h>

using namespace std;

void zeroes(long int)
int main()
{
	long int N;
	cin>>N;
	long int Number;
	int temp = N;
	do
	{
		cin>>Number;
		temp--;
		zeroes(Number);
	}while(Number<=0||temp>=0);
	
}

void zeroes(long int Number)
{
	
}
void fact(long int Number)
{
	if(Number==0)
		cout<<1;
	else
		cout<<Number*fact(Number-1);
}
	
	
}
