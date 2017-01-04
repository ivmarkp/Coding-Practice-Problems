/** Print all the k-ary strings of length n.
 *	E.g.
 *	Input:
 *	2 3
 *	Output:
 *	00
 *	10
 *	20
 *	01
 *	11
 *	21
 *	02
 *	12
 *	22
 */
#include <bits/stdc++.h>
using namespace std;

char p[] = "";

void k_ary(int n, int k) {
	if (n < 1)
		cout << p << endl;
	else {
		for (int i = 0; i < k; i++) {
			p[n-1] = i+48;
			k_ary(n-1, k);
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	k_ary(n, k);
	return 0;
}
