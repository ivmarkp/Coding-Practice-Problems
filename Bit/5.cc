/** Given an array of n integers, where all but one of the integers occur in pairs. Find
 *  and print the unique element.
 *	E.g.
 *	Input:
 *	1 2 4 1 2
 *	Output:
 *	4
 */
#include<bits/stdc++.h>
using namespace std;

int lonely(int a[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans ^ a[i];
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << lonely(a, n) << endl;
	return 0;
}
