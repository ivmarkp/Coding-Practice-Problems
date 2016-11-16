/* Linear Search Algorithm
   Time Complexity : O(n)
   E.g.
   Input:
   2 3 6 4 5 7
   5
   3
   10
   Output:
   4
   1
   -1
*/
#include <bits/stdc++.h>
using namespace std;

int search(int *a, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (x == *(a+i))
			return i;
	}
	return -1;
}

int main()
{
	int a[] = {2, 3, 6, 4, 5, 7};
	int n = sizeof(a)/sizeof(a[0]);
	int x;
	cin >> x;
	cout << search(a, n, x) << endl;
	return 0;
}
