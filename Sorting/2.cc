/* Selection Sort Algorithm:
   Repeatedly find the minimum element (considering ascending order) from unsorted
   part and put it at the beginning. It never makes more than O(n) swaps and can be
   useful when memory write is costly operation.
   
   Time Complexity: O(n^2)
   Sorting In Place: Yes
   Stable: No
   Auxiliary Space: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int* selection_sort(int *a, int size) {
	int min;
	for (int i = 0; i < size; i++) {
		min = i;
		for (int j = i+1; j < size; j++) {
			if (a[j] < a[min])
				min = j;
		}
		swap(a[i], a[min]);
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
