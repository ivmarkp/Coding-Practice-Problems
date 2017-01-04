/** Given a string, print all possible strings that can be made by placing spaces
 *	(zero or one) in between them.
 *	E.g.
 *	Input:
 *	ABC
 *	Output:
 *	(A B C)(A BC)(AB C)(ABC)
 */
#include<bits/stdc++.h>
using namespace std;

void permutation(string s, char buff[], int l, int i, int j) {
    if (i == l) {
        buff[j] = '\0';
        cout << '(' << buff << ')';
        return;
    }

    buff[j] = s[i];
    permutation(s, buff, l, i+1, j+1);

    buff[j] = ' ';
    buff[j+1] = s[i];
    permutation(s, buff, l, i+1, j+2);
}

int main() {
    string s;
    cin >> s;
    int l = s.size();
    // A buffer string to hold the string containing total
    // 2l-1 characters (including spaces) and a NULL terminator
    char buff[2*l];
    buff[0] = s[0];
    
    permutation(s, buff, l, 1, 1);
    cout << endl;
	
	return 0;

}
// Time Complexity: O(n*(2^n))
