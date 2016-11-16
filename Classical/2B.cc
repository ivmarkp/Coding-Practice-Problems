/* Given an array of n numbers, find LCM.
   E.g.
   Input:
   3
   4 8 16
   Output:
   16

Hints:
Use the basic idea that lcm of 3 nos can be calculated by first calculating lcm of first
two nos (let's call it l1) and then the final answer will be the lcm of l1 and the third
number.
*/
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	int rem = a % b;	
	return GCD(b, rem);
}

int main()
{
	int size;
	cin >> size;
	vector<int> arr;
	int val;
	for (int i = 0; i < size; i++) {
		cin >> val;
		arr.push_back(val);
	}
	int lcm = 1;
	for (int i = 0; i < size; i++)
		lcm = lcm * arr[i] / GCD(arr[i], lcm);
	cout << lcm << endl;
	return 0;
}
