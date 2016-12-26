/** Implement Heap Sort to sort an array in ascending order.
 */
#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& a, int n, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int max;
    // Store index of the largest element among the current node
    // & its children in max.
    if (left < n && a[left] > a[i])
        max = left;
    else
        max = i;
    if (right < n && a[right] > a[max])
        max = right;
    
    if (max != i) {
        swap(a[i], a[max]);
        heapify(a, n, max);
    }
}

void buildHeap(vector<int>& a, int n) {
	// Build a max heap.
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);
}

void heapSort(vector<int>& a, int n) {
	buildHeap(a, n);
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end.
		swap(a[i], a[0]);
		// Build max heap on reduced array (n is reduced to i)
		heapify(a, i, 0);
	}
}

int main() {
	vector<int> a = {2, 4, 1, 6, 9, 7, 0};
	int size = a.size();

	heapSort(a, size);

	// Print the sorted array.
	for (auto i : a) cout << i << ' ';
	cout << endl;
	return 0;
}
