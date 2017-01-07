/* Binary Search: Search a sorted array by repeatedly dividing the search interval in half.
   Time Complexity : O(logn)
   E.g.
   Input:
   2 3 4 5 6 8 11
   5
   3
   10
   Output:
   3
   1
   -1
*/

// Iterative Implementation
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> a, int n, int x) {
	int left = 0;
	int right = n - 1;
	int mid = (left + right) / 2;
	while (left <= right) {
		if (x < a[mid]) {
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (x > a[mid]) {
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (x == a[mid])
			return mid;
	}
	return -1;
}

int main()
{
	vector<int> a = {2, 3, 4, 5, 7, 8, 11};
	int n = a.size();
	int x;
	cin >> x;
	cout << search(a, n, x) << endl;
	return 0;
}

/* Recursive Implementation
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> a, int left, int right, int x) {
	int mid = (left + right) / 2;
	if (right >= left) {
		if (x < a[mid])
			return search (a, left, mid-1, x);
		else if (x > a[mid])
			return search (a, mid+1, right, x);
		else
			return mid;
	}
	else
		return -1;
}

int main()
{
	vector<int> a = {2, 3, 4, 5, 7, 8, 11};
	int n = a.size();
	int x;
	cin >> x;
	cout << search(a, 0, n-1, x) << endl;
	return 0;
}*/
