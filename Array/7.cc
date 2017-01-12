/** The cost of a stock on each day is given in an array, find the max profit
 *	that can be made by buying and selling in those days. Here, we are allowed
 *	to buy and sell multiple times.
 *	E.g.
 *	Input:
 *	100 180 260 310 40 535 695
 *	23 13 25 29 33 19 34 45 65 67
 *	Output:
 *	(0 3) (4 6)
 *	(1 4) (5 9)
 */
#include<bits/stdc++.h>
using namespace std;

void MaxProfit(int arr[], int size) {
	if (size == 1)
		return;
	int i = 0;
	while (i < size-1) {
		// Find local minima.
		while (i < size-1 && arr[i] >= arr[i+1])
			i++;
		// If reached the last element then no solution exists
		// as the prices are given in a descending order.
		if (i == size-1)
			break;
		// Print the index of local minima.
		cout << '(' << i++ << ' ';
		
		// Find local maxima.
		while (i < size && arr[i] >= arr[i-1])
			i++;
		// Print the index of local maxima.
		cout << i-1 << ") ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	MaxProfit(arr, n);
	return 0;
}

