/** Construct an N input XOR Gate. The XOR Gate returns 1 if odd number of its inputs are
 *	1, otherwise 0.
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans = ans ^ x;
    }
    cout << ans << endl;
	return 0;
}
