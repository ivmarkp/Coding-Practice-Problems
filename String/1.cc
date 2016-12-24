/* Remove all characters from an alphanumeric string.
   E.g.
   Input:
   AA123bb4
   Output:
   1234
*/

#include<bits/stdc++.h>
using namespace std;

string remove_char(string str) {
    string out = "";
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9')
            out += str[i];
        i++;
    }
    out += '\0';
    return out;
}

int main() {
    string str;
    cin >> str;
    cout << remove_char(str) << endl;
    return 0;
}
