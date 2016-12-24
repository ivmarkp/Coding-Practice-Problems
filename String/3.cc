/* Given a string ‘str’, check that the reverse of all possible substrings of ‘str’ are
   present in ‘str' or not. (Note: To put it in other words; check whether the given is
   palindrome or not which was figured out by writing down some input examples.)
   E.g.
   Input:
   ab
   aba
   Output:
   0; all substrings are "a","b","ab" but the reverse of "ab" is not present in str.
   1
*/
#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s) {
    int low = 0, high = s.length() - 1;
    while (low <= high) {
        if (s[low++] != s[high--])
            return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (check_palindrome(s))
        cout << 1 << endl;
    else
        cout << 0 << endl;
	return 0;
}
