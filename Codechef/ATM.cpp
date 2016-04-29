#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
using namespace std;

void transaction(float,float,float);
int main()
{
	float withdraw;
	float charges = 0.50;
	float balance;
	cin>>withdraw>>balance;
	if(fmod(withdraw,5) == 0)
	{
		transaction(withdraw,balance,charges);
	}
	else 
	printf("%.2f",balance);
	return 0;
}

void transaction(float withdraw, float balance, float charges)
{	
	if(withdraw>0&&withdraw<=2000&&balance>=0&&balance<=2000)
	{
		cout<<"Check #1\n";
		if(balance>withdraw+charges)
		{
			cout<<"#2\n";
			balance = balance - (withdraw+charges);
			cout<<balance;
		}
		
		else if(balance<withdraw+charges || balance<withdraw)
		{
			cout<<"#4\n";
			printf("%.2f",balance);
		}
		cout<<"#5";
	}
	else 
	printf("%.2f",balance);
}
