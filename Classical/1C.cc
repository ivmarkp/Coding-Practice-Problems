/* Given a Fibonacci number, print its index in the Fibonacci sequence.
   E.g.
   Input:
   3
   5
   Output:
   4
   5
*/
#include <bits/stdc++.h>
using namespace std;

// Assuming that only valid Fibonacci numbers are passed to the function.
int fibo_index(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else {
		vector<int> arr;
		arr.push_back(0);
		arr.push_back(1);
		int i = 2;
		int index = 0;
		while(1){
			// Don't use index notation to store ith value as arr[i] = arr[i-1] + arr[i-2]
			// here because it will result in unexpected behaviour. Add new values using
			// push_back() function only.
			arr.push_back(arr[i-1] + arr[i-2]);
			if (n == arr[i]) {
				index = i;
				break;
			}
			i += 1;
		}
		return index;
	}
}

int main()
{
	int num;
	cin >> num;
	cout << fibo_index(num) << endl;
	return 0;
}
