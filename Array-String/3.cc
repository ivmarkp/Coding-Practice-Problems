/* Given an unsorted array of distinct elements, find the third largest element in it.
   E.g.
   Input:
   2 4 1 3 5
   1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
   Output:
   3
   16
*/
#include <bits/stdc++.h>
using namespace std;

// Method to find third largest element in one traversal only.
void thirdlargest(vector<int>& A, int n) {
	int first = A[0]; int second = -1; int third = -1;
	for (int i = 1; i < n; i++) {
		if (A[i] > first) {
			third = second;
			second = first;
			first = A[i];
		}
		else if (A[i] > second) {
			third = second;
			second = A[i];
		}
		else if (A[i] > third)
			third = A[i];
	}
	cout << third << endl;
}

int main()
{
	vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = A.size();
	thirdlargest(A, size);
	return 0;
}
