/* Print all prime numbers smaller or equal to n.
   Input:
   5
   30
   Output:
   2 3
   2 3 5 7 11 13 17 19 23 29
*/

// "Sieve of Eratosthenes"
// One of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool arr[n+1];
	// Use memset for initialization. Normal initialization i.e. bool arr[n+1] = {1} doesn't seem to work here.
	memset(arr, true, sizeof(arr));
	for (int p = 2; p*p <= n; p++) {
		if (arr[p]) {
			// Update all multiples of p i.e. p, 2p, 3p and so on
			for (int k = p*2; k <= n; k += p)
				arr[k] = false;
		}
	}
	for (int p = 2; p <= n; p++) {
		if (arr[p])
			cout << p << ' ';
	}
	cout << endl;
	return 0;
}
