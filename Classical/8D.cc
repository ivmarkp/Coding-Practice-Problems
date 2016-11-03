/* Merge Sort Algorithm:
   A Divide and Conquer algorithm -- divides input array in two halves and calls
   itself for the two halves and then merges the two sorted halves. Useful for
   sorting particularly linked lists in O(nLogn) time. Unlike array, in linked
   list, we can insert items in the middle in O(1) extra space and O(1) time.
   So, merge operation of merge sort can be implemented without extra space.
   
   Time Complexity: O(nlogn)
   Sorting In Place: No
   Stable: Yes
   Auxiliary Space: O(n)
*/
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, int l, int m, int r) {
	vector<int> L;
	vector<int> R;
	
	for (int i = l; i <= m; i++)
		L.push_back(a[i]);
	for (int i = m+1; i <= r; i++)
		R.push_back(a[i]);
		
	int i = 0, j = 0; // Initial index of first and second subarray
	int k = l;	// Initial index of merged subarray
	while (i < L.size() && j < R.size()) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}
	
	// Filling leftovers
	while (i < L.size()) {
		a[k] = L[i];
		k++;
		i++;
	}
	while (j < R.size()) {
		a[k] = R[j];
		k++;
		j++;
	}
}

void merge_sort(vector<int>& a, int l, int r) {
	if (l < r) {
		int m = l + (r-l) / 2; // Avoids integer overflow.
		merge_sort(a, l, m);
		merge_sort(a, m+1, r);
		merge(a, l, m, r);
	}
}

int main()
{
	vector<int> a = {2, 4, 1, 5, 3, 9};
	int size = a.size();	
	
	merge_sort(a, 0, size-1);
	
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
	return 0;
}
