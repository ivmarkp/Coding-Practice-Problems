/* Segregate even and odd numbers in an array such that even numbers appear first in
   ascending order followed by odd numbers in descending order.
   E.g.
   Input:
   5 7 14 26 57 1 4
   12 34 45 9 8 90 3
   2 34 45 9 8 90
   Output:
   4 14 26 57 7 5 1
   8 12 34 90 45 9 3
   2 8 9 34 90 45
*/
#include<bits/stdc++.h>
using namespace std;

void SegAndSort(vector<int>& A, int size) {
	vector<int> even, odd;
	for (int i = 0; i < size; i++) {
		if (A[i] % 2 == 0)
			even.push_back(A[i]);
		else
			odd.push_back(A[i]);
	}
	// Sort even in ascending order and odd in descending order.
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end(), greater<int>());
	// Modify original vector A with even nos appearing firt followed by odd nos.
	for (int i = 0; i < even.size(); i++)
		A[i] = even[i];
	for (int i = 0; i < odd.size(); i++)
		A[i + even.size()] = odd[i]; 
}

int main()
{
	vector<int> A = {12, 34, 45, 9, 8, 90, 3};
	int size = A.size();

	SegAndSort(A, size);
	for (auto i : A) cout << i << ' ';
	cout << endl;

	return 0;
}
