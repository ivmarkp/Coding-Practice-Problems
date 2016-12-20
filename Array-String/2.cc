/* Dutch National Flag Problem: Given balls of these three colors arranged randomly in a
   line (the actual number of balls does not matter), the task is to arrange them such that
   all balls of the same color are together and their collective color groups are in the
   correct order.
   E.g. taking 0, 1 and 2 as representations of three different colors.
   Input:
   0 1 1 0 1 2 1 2 0 1
   Output:
   0 0 0 1 1 1 1 1 2 2
*/
#include<bits/stdc++.h>
using namespace std;

void DutchSort(vector<int>& A, int size) {
	int low = 0;
	int mid = 0;
	int high = size - 1;

	while (mid <= high) {
		switch(A[mid]) {
			case 2: {
				swap(A[mid], A[high]);
				high--;
				break;
			}
			case 1: {
				mid++;
				break;
			}
			case 0: {
				swap(A[mid], A[low]);
				low++;
				mid++;
				break;
			}
		}
	}
}

int main()
{
	vector<int> A = {0, 1, 1, 0, 1, 2, 1, 2, 0, 1};
	int size = A.size();

	DutchSort(A, size);
	for (auto i : A) cout << i << ' ';
	cout << endl;

	return 0;
}
