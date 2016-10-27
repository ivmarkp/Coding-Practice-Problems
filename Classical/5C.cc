/* Print the nth prime number.
   Input:
   10
   1000
   Output:
   29
   7919
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int p) {
	if (p < 2)
		return 0;
	for (int i = 2; i <= sqrt(p); i++) {
		if (p % i == 0)
			return 0;
	}
	return 1;
}

int nthprime(int n) {
	int num = 1;
	int count = 0;
	while (1) {
		if (isPrime(num))
			count++;
		if (count == n)
			break;
		else
			num++;
	}
	return num;
}

int main()
{
	int n;
	cin >> n;
	cout << nthprime(n) << endl;
	return 0;
}


