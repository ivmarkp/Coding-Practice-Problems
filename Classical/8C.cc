/* Insertion Sort Algorithm: In-place comparison-based sorting algorithm.
							 Here, a sub-list is maintained which is always sorted.
   Time Complexity: O(n^2)
   Sorting In Place: Yes
   Stable: Yes
   Auxiliary Space: O(1)
   Uses: Useful when number of elements is small and also when input array is almost
   sorted i.e. only few elements are misplaced in complete big array.
   
   Dry Run Example:
   i = 0:	[2], 4, 1, 5, 3, 9
   i = 1:	[2, 4], 1, 5, 3, 9
   i = 2:	[1, 2, 4], 5, 3, 9
   i = 3:	[1, 2, 4, 5], 3, 9
   i = 4:	[1, 2, 3, 4, 5], 9
   i = 5:	[1, 2, 3, 4, 5, 9]
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int> a, int size) {
	for (int i = 0; i < size; i++) {
		int p = a[i], j = i - 1;
		while (p < a[j] && j >= 0) {
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = p;
	}
	return a;
}

int main()
{
	vector<int> a = {2, 4, 1, 5, 3, 9};
	int size = a.size();
	vector<int> p = insertion_sort(a, size);
	vector<int>::iterator it; 
	for (it = p.begin(); it != p.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	return 0;
}
