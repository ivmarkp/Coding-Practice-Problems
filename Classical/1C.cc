/* Given a Fibonacci number, print its index in the Fibonacci sequence.
   Input:
   3
   5
   Output:
   4
   5
*/
#include <bits/stdc++.h>
using namespace std;

int fibo_index(int n) { // Assuming that only valid Fibonacci numbers are passed to the function.
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
			arr.push_back(arr[i-1] + arr[i-2]); // Don't use index notation to store ith value as arr[i] = arr[i-1] + arr[i-2]
			if (n == arr[i]) {					// here because it will result in unexpected behaviour. Add new values using
				index = i;						// push_back() function only.
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
