/* Quick Sort: A Divide and Conquer algorithm. It picks an element as pivot and partitions
			   the given array around the picked pivot then calls itself recursively twice
			   to sort the two resulting subarrays. 
   Time Complexity: O(nlogn)
   Sorting In Place: In general -- yes.
   Auxiliary Space:
   Stable: No
   Uses: Quick Sort is preferred over MergeSort for sorting Arrays unlike  MergeSort which
		 is preferred over QuickSort for linked lists.
*/
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int start, int end) {
	int pivot = a[end]; //Taking pivot as last element in the array
	int piv_index = start; //Intially taking pivot index as 0
	for (int i = start; i < end; i++) {
		if (a[i] <= pivot) {
			swap(a[i], a[piv_index]);
			piv_index++;
		}
	}
	swap (a[piv_index], a[end]);
	return piv_index;
}

void quick_sort(vector<int>& a, int start, int end) {
	if (start >= end)
		return;
	int pivot = partition(a, start, end);
	quick_sort(a, start, pivot-1);
	quick_sort(a, pivot+1, end);
}

int main()
{
	vector<int> a = {2, 4, 1, 5, 3, 9};
	int size = a.size();
	quick_sort(a, 0, size-1);
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
	return 0;
}
