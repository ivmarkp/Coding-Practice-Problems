/* Print the following pattern for given n no. of rows:
   For e.g.
   n = 5
      #
     ###
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
	int p = n / 2;
	for (int i = 1; i <= p+1; i++) {
		for (int j = p; j >= i; j--)
			cout << ' ';
		for (int k = 1; k <= 2*i-1; k++)
			cout << '#';
		cout << endl;
	}
	for (int i = p; i >= 1; i--) {
		for (int j = i; j <= p; j++)
			cout << ' ';
		for (int k = 2*i-1; k >= 1; k--)
			cout << '#';
		cout << endl;
	}
	return 0;
}
