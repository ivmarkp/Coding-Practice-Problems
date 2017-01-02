/** Find the 1's complement of a given binary number. The 1's complement of a binary number
 *  is the value obtained by inverting all the bits in the binary representation of the number.
 */ 
#include<bits/stdc++.h>
using namespace std;

char ones(char ch) {
    if (ch == '0') return '1';
    else return '0';
}

int main() {
    int n;
    cin >> n;
    char ch;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        cout << ones(ch) << ' ';
    }
    cout << endl;
	return 0;
}
