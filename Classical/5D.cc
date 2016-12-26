/** Print all prime numbers smaller or equal to n.
 *  E.g.
 *  Input:
 *  5
 *  Output:
 *  2 3
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool arr[n+1];
	// Use memset for initialization; bool arr[n+1] = {1} doesn't seem to work.
	memset(arr, true, sizeof(arr));
	for (int p = 2; p*p <= n; p++) {
		if (arr[p]) {
			// Update all multiples of p starting from 2p, 3p and so on
			for (int k = 2*p; k <= n; k += p)
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

/** Time complexity: O(n log log n).
 *  Notes: The method is called "Sieve of Eratosthenes". It is one of the efficient
 *  ways to find all primes smaller than n for n < 10 million or so.
 */
