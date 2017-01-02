/** Print binary representation of a number in 14 bits.
 *  E.g.
 * 	Input:
 *	2
 *	00000000000010
 */
#include<bits/stdc++.h>
using namespace std;

void binary(int n) {
    list<string> s;
    int count = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            s.push_front("0");
            count++;
        } else {
            s.push_front("1");
            count++;
        }
        n /= 2;
    }
    for (int i = 14-count; i > 0; i--)
        s.push_front("0");
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it;
}

int main() {
    int n;
    cin >> n;
    binary(n);
    cout << endl;
	return 0;
}
