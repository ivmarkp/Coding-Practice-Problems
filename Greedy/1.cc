/** Given two arrays of equal size, find the minimum value of
 *  A[0] * B[0] + A[1] * B[1] + … + A[n-1] * B[n-1], where
 *  shuffling of elements of arrays A and B is allowed.
 *  E.g.
 *  Input:
 *  3 1 1
 *  6 5 4
 *  Output:
 *  23	(1*6 + 1*5 + 3*4)
 */
#include<bits/stdc++.h>
using namespace std;

int minSOP(int n, int a[], int b[]) {
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    int SOP = 0;
    for (int i = 0; i < n; i++)
        SOP += a[i] * b[i];
    return SOP;
}

int main() {
    int size;
    cin >> size;
    int arrayA[size], arrayB[size];
    for (int i = 0; i < size; i++)
        cin >> arrayA[i];
    for (int i = 0; i < size; i++)
        cin >> arrayB[i];
    cout << minSOP(size, arrayA, arrayB) << endl;
	return 0;
}
