/* Selection Sort Algorithm: Repeatedly finding the minimum element (considering
							 ascending order) from unsorted part and putting it at
							 the beginning.
   Time Complexity: O(n^2)
   Sorting In Place: Yes
   Stable: No
   Auxiliary Space: O(1)
   Uses: It never makes more than O(n) swaps and can be useful when memory write is a costly operation.
*/
#include <bits/stdc++.h>
using namespace std;

int* selection_sort(int *a, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (a[j] < a[i]) {
				swap(a[j], a[i]);
			}
		}
	}
	return a;
}


int main()
{
	int a[] = {2, 4, 1, 5, 3, 9, 10};
	int size = sizeof(a)/sizeof(a[0]);
	int *p = selection_sort(a, size);
	for (int i = 0; i < size; i++)
		cout << *(p+i) << ' ';
	cout << endl;
	return 0;
}
