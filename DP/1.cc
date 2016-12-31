/** Print nth fibonacci sequence.
 */
#include <bits/stdc++.h>
using namespace std;

int fibo_improved(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	int a = 0, b = 1, sum;
	for (int i = 2; i <= n; i++) {
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}
/** Time Complexity: O(n)
 * Space Complexity: O(1)
 */
// Bottom-Up Approach
int fibo_bottom(int n) {
	int f[n+1];
	f[0] = 0; f[1] = 1;
	for (int i = 2; i <= n; i++)
		f[i] = f[i-1] + f[i-2];
	return f[n];
}
/** Time Complexity: O(n)
 *	Space Complexity: O(n) 
 */
// Top-Down Approach
#define N 100
long t[N];
int fibo_top(int n) {
	t[0] = 0; t[1] = 1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (t[n] != 0)
		return t[n];
	return t[n] = fibo_top(n-1) + fibo_top(n-2);
}
/** Time Complexity: O(n)
 * Space Complexity: O(n)
 */
int main() {
	int n;
	cin >> n;
	cout << fibo_bottom(n) << endl;
	cout << fibo_top(n) << endl;
	cout << fibo_improved(n) << endl;
}
