/* Count Factorial numbers in a given range [l, m].
   E.g.
   Input:
   0 1
   10 200
   Output:
   1 i.e. 1
   2 i.e. 24, 120
*/
#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	if (n < 0)
		return 0;
	if (n == 0 || n == 1)
		return 1;
	return n * fact(n-1);
}

int count_fact(int l, int m) {
	int count = 0;
	int i = 1;	
	while (1) {
		if (l <= fact(i) && fact(i) <= m)
			count++;
		if (fact(i) > m)
			break;
		i++;
	}
	return count;
}

int main()
{
	int l, m;
	cin >> l >> m;
	cout << count_fact(l, m);
	return 0;
}
