/* Print the following pattern for given n no. of rows:
   E.g.
   Input:
   4
   Output:
   ####
   ###
   ##
   #
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int k = 1; k <= i; k++)
			cout << '#';
		cout << endl;
	}
	return 0;
}
