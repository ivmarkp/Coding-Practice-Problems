/** Print numbers from 1 to n without using loops.
 */
#include<bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if (i > n)
        return;
    cout << i  << ' ';
    print(i+1, n);
}

int main() {
    int n;
    cin >> n;
    print(1, n);
    cout << endl;
	return 0;
}
// Time Complexity: O(n)
