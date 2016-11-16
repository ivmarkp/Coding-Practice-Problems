/* Check whether a given no. is prime in better time complexity than O(n).
   E.g.
   Input:
   2
   4
   Output:
   Prime
   Not Prime
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cout << "Enter num: ";
	cin >> num;
	int sqr_rt = sqrt(num);
	bool prime = 1;
	for (int i = 2; i <= sqr_rt; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}
	if (!prime || num < 2)
		cout << "Not Prime\n";
	else
		cout << "Prime\n";
	getchar();
	return 0;
}
