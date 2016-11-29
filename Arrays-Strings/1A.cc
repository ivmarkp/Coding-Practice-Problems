/* Segregate even and odd numbers in an array such that even numbers appear first and then
   odd numbers. Note: The order of numbers DOES NOT matter.
   E.g.
   Input:
   5 7 14 26 57 1 4
   12 34 45 9 8 90 3
   Output:
   14 26 4 5 7 1 57
   12 34 90 8 9 45 3
*/
#include <bits/stdc++.h>
using namespace std;

void SegOddEven(vector<int>& A, int size) {
	// Initialize first and last index
	int first = 0;
	int last = size-1;
	while (first < last) {
		// If elements at first and last are odd and even respectively, then swap and inc
		// first and dec last.
		if (A[last] % 2 == 0 && A[first] % 2 != 0) {
			swap (A[first], A[last]);
			first++;
			last--;
		}
		// If elements at first and last are even and odd respectively, then inc first and
		// leave last unchanged.
		else if (A[last] % 2 != 0 && A[first] % 2 == 0) first++;
		// If both elements are odd, then dec last and let first remain unchanged.
		else if (A[last] % 2 != 0 && A[first] % 2 != 0) last--;
	}
}

int main()
{
	vector<int> A = {12, 34, 45, 9, 8, 90, 3};
	int size = A.size();

	SegOddEven(A, size);
	for (auto i : A) cout << i << ' ';
	cout << endl;
	
	return 0;
}
