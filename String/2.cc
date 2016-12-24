/* Given a string containing ONLY lowercase letters, generate a string with the same
   letters, but in uppercase.
   E.g.
   Input:
   string
   lowercase
   Output:
   STRING
   UPPERCASE
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if ('a' <= s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A'; // Interchange 'a' and 'A' for vice versa.
    // transform(s.begin(), s.end(), s.begin(), ::toupper); :P
    cout << s << endl;
	return 0;
}
