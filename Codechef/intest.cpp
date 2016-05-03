#include<iostream>
#include<stdio.h>
using namespace std;

void check(int, int);
int main()
{
	int n;
	int k;
	cin>>n>>k;
	check(n,k);
	return 0;
}
void check(int n, int k)
{
	long int number;
	int count = 0;
	for(int i=0; i<n; i++)
	{
		cin>>number;
		if(number%k == 0)
			count++;
	}
	cout<<count;
}
