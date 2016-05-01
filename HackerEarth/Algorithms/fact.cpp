#include<iostream>
#include<stdio.h>
using namespace std;
int fact(int);
int main()
{
	int number;
	long long int result;
	cin>>number;
	result = fact(number);
	cout<<result;
	return 0;
}

int fact(int n)
{		
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));
}
