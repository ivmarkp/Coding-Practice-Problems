/* Print the following pattern for given n no. of rows:
   For e.g.
   n = 4
   #######
    #####
     ###
      #
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < i-1; k++)
			cout << ' ';
		for (int j = 1; j <= 2*(n-i+1)-1; j++)
			cout << '#';
		cout << endl;
	}
	return 0;
}
