/* Find the factorial of a number.
   Input:
   5
   Output:
   120 i.e. (5*4*3*2*1)
*/
#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	if (n < 0)
		return 0;
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n-1);
}

int main()
{
	int num;
	cin >> num;
	cout << fact(num) << endl;
	return 0;
}
