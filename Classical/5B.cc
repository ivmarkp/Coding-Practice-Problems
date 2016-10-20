/* Print all prime factorization of a given number.
   Input:
   4
   15
   18
   Output:
   2 2
   3 5
   2 3 3
*/
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	int num;
	cout << "Enter num: ";
	cin >> num;
	while (num % 2 == 0) {
		cout << 2 << ' '; // Print 2 for as many times as number is divisible by 2.
		num /= 2;
	}
	// After the while loop the given number has become odd.
	for (int i = 3; i <= num; i += 2) { // Check only for odd no's now on for divisibly test, hence i += 2.
		while (num % i == 0) {
			cout << i << ' '; 
			num /= i;
		}
	}
	getchar();
	return 0;
}
