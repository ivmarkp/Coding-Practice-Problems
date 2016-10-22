/* Find the nth Fibonacci number.
   Input:
   0
   1
   5
   Output:
   0
   1
   3
*/
#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}

int main()
{
	int num;
	cin >> num;
	cout << fibo(num) << endl;
	return 0;
}
