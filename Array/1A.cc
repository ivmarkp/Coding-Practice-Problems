/* Segregate even and odd numbers in an array such that even numbers appear first and then
   odd numbers. Note: The order of numbers DOES NOT matter.
   E.g.
   Input:
   5 7 14 26 57 1 4
   12 34 45 9 8 90 3
   2 34 45 9 8 90
   Output:
   14 26 4 5 7 1 57
   12 34 90 8 9 45 3
   2 34 90 8 9 45
*/
#include <bits/stdc++.h>
using namespace std;

void SegOddEven(vector<int>& A, int size) {
	// Initialize first and last index
	int first = 0;
	int last = size-1;
	while (first < last) {
		// If first and last elements are odd and even respectively, then swap & increment
		// first and decrement last.
		if (A[first] % 2 == 1 && A[last] % 2 == 0) {
			swap (A[first], A[last]);
			first++;
			last--;
		}
		// If first and last elements are even and odd respectively, then increment first.
		if (A[first] % 2 == 0 && A[last] % 2 == 1) first++;
		// If both elements are odd, then decrement last.
		if (A[first] % 2 == 1 && A[last] % 2 == 1) last--;
		// If both elements are even, then increment first.
		if (A[first] % 2 == 0 && A[last] % 2 == 0) first++;
	}
}

int main()
{
	vector<int> A = {2, 34, 45, 9, 8, 90};
	int size = A.size();

	SegOddEven(A, size);
	for (auto i : A) cout << i << ' ';
	cout << endl;
	
	return 0;
}
