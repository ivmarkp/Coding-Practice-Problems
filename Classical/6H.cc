/* Print the following pattern for given n no. of rows:
   E.g.
   Input:
   4
   Output:
   4
   34
   234
   1234
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		for (int j = n-i+1; j <= n; j++)
			cout << j;
		cout << endl;
	}
	return 0;
}
