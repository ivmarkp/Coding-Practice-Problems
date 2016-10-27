/* Print the following pattern for given n no. of rows:
   For e.g.
   n = 4
      #
     ###
    #####
   #######
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n-i; j >= 1; j--) 
			cout << ' ';
		for (int k = 1; k <= 2*i-1; k++)
			cout << '#';
		cout << endl;
	}
	return 0;
}
