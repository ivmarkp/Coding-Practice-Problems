/** 
 * Given a min heap, find the largest element.
 */

int findMax(vector<int> a, int n) {
	int max = -1;
	for (int i = (n + 1) / 2; i < n; i++)
		if (a[i] > max)
			max = a[i];
}
// The largest element will always be at leaf node in a min-heap.
// Since, the next node of last element's parent is the first leaf node
// The last element is at n-1th node, its parent will be at (n-1)/2th node.
// So, the next node after (n-1)/2th node is at (n-1)/2 + 1 = (n+1)/2th
// position.
