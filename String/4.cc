/* Given a number, change a digit if it's 5 to 6 and vice versa. Print the sum of the max
   number and the min number obtained after performing conversion.
   E.g.
   Input:
   2
   35
   5
   Output:
   71
   11
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Input number as a string.
    string n;
    cin >> n;
    cin >> ws;
    string d = "";
    for (int i = 0; i <= n.length() - 1; i++) {
        if (n[i] == '5')
            d[i] = '6';
        else if (n[i] == '6')
            d[i] = '5';
        else
            d[i] = n[i];
    }
    cout << stoi(n) + stoi(d) << endl;
	return 0;
}
