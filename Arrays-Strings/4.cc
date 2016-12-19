/* Given an array, left-rotate it by d elements where d is less than or equal to the size
   n of the given array.
   E.g.
   Input:
   5
   1 2 3 4 5
   2
   Output:
   3 4 5 1 2

   More: geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/
*/
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& a, int start, int end) {
    // Two-pointer approach to reverse input array.
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& a, int n, int d) {
    /* Let AB are the two parts of the input array; A = a[0..d-1] and B = a[d..n-1].
       The idea of the algorithm is:
	   Reverse A to get ArB -- Ar is reverse of A
	   Reverse B to get ArBr -- Br is reverse of B
	   Reverse all to get (ArBr)r = BA.
	*/
    reverse(a, 0, d-1);
    reverse(a, d, n-1);
    reverse(a, 0, n-1);
    // Print the rotated array
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;
}

int main() {
	int n, d;
	cin >> n;
	vector<int> a(n);
	int val;
	for (int i = 0; i < n; i++) {
	    cin >> val;
	    a[i] = val;
	}
	cin >> d;
	rotate(a, n, d);
	return 0;
}
