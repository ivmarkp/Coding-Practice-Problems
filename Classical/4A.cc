/* Check whether a string is a palindrome using pointer.
   Input:
   lollol
   nolol
   Output:
   Yes
   No
*/

#include <bits/stdc++.h>
using namespace std;

bool check(char *str, int len) {
	//Use two index pointers -- one set to first character's address and another set to last character's length;
	char* start = str; char* end = str + len - 1;
	bool flag = 1;
	while (start != end) {
		if (*start != *end) {
			flag = 0;
			break;
		}
		//Increment first index and decrement last index.
		start += 1; end -= 1;
	}
	return flag;
}

int main()
{
	string str;
	getline(cin, str, '\n');
	int len = str.length();
	bool flag = check(&str[0], len);
	if (flag)
		cout << "Yes\n";
	else
		cout << "No\n";
	getchar();
	return 0;
}
