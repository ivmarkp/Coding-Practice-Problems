/** A Padovan Sequence is a sequence represented by the following recurrence:
 *	P(n) = P(n-2) + P(n-3)
 *	P(0) = P(1) = P(2) = 1
 *	Print nth number in this sequence.
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n+1];
    p[0] = p[1] = p[2] = 1;
    for (int i = 3; i <= n; i++)
        p[i] = (p[i-2] + (p[i-3];
    cout << p[n] << endl;
	return 0;
}
/** Time Complexity: O(n)
 *	Space Complexity: O(n) 
 */
