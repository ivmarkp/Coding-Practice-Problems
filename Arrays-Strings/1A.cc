/* Segregate even and odd numbers in an array.
   Note: All even numbers should appear first, then odd numbers and the order of numbers
   DOES NOT matter.
   E.g.
   Input:
   5 7 14 26 57 1 4
   Output:
   14 26 4 5 7 1 57
   or
   14 26 4 7 57 1 5
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> SegOddEven(vector<int>& A, int size) {
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
		// If both elements are odd, then dec last and let first remain unchanged.
		else if (A[last] % 2 != 0 && A[first] % 2 != 0) last--;
	}
	return A;
}

int main()
{
	vector<int> A = {5, 7, 14, 26, 57, 1, 4};
	int size = A.size();

	vector<int> B(size, 0);
	B = SegOddEven(A, size);
	for (auto i : B) cout << i << ' ';
	cout << endl;
	
	return 0;
}
