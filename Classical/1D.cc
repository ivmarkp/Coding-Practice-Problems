/* Check if a given number is a valid Fibonacci number.
   E.g.
   Input:
   0
   5
   12
   Output:
   Yes
   Yes
   No
*/
#include <bits/stdc++.h>
using namespace std;

string fibo_check(int n) {
	if (n == 0 || n == 1)
		return "Yes";
	else {
		vector<int> arr;
		arr.push_back(0);
		arr.push_back(1);
		int i = 2;
		while (1){
			arr.push_back(arr[i-1] + arr[i-2]);
			if (arr[i] == n) {
				return "Yes";
				break;
			}
			else if (arr[i] > n) {
				return "No";
				break;
			}
			i++;
		}
	}
}

int main()
{
	int num;
	cin >> num;
	cout << fibo_check(num) << endl;
	return 0;
}
