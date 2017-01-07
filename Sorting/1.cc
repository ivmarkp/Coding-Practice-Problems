/* Bubble Sort Algorithm
   Time Complexity: O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

int* bubble_sort(int *a, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	return a;
}


int main()
{
	int a[] = {2, 4, 1, 5, 3, 9, 10};
	int size = sizeof(a)/sizeof(a[0]);
	int *p = bubble_sort(a, size);
	for (int i = 0; i < size; i++)
		cout << *(p+i) << ' ';
	cout << endl;
	return 0;
}
