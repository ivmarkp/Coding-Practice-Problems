/* Check whether a number is a palindrome.
   Input:
   12321
   1110
   Output:
   Yes
   No
*/
// Iterative Solution
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int rev_num = 0;
	int temp = num;
	while (temp > 0) {
		rev_num = rev_num * 10 + temp % 10;
		temp = temp / 10;
	}
	cout << num << ' ' << rev_num << endl;
	if (num == rev_num)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}*/

//Recursive Solution
#include <bits/stdc++.h>
using namespace std;

int check_pal(int n) {
	static int rev_num = 0;
	static int num = n;
	if (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
		check_pal(n);
	}
	return rev_num;
}

int main()
{
	int num;
	cin >> num;
	int rev_num = check_pal(num);
	if (num == rev_num)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
