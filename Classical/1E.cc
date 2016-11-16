/* Given a number n, find the number of digits in the nth Fibonacci number.
   E.g.
   Input:
   0
   8
   44
   Output:
   1 i.e. 0
   2 i.e. 21
   9 i.e. 701408733
*/

/*Hints:
Binet's formula for calculating Fibonacci numbers, combined with the fact that the number
of digits in any integer is just 1 + the whole-part of its log10, can be used to find the
no. of digits in a Fibonacci number efficiently.

So, the no. of digits = log10(Phi^n/√5) =  n*log10(Phi) - (log10(5))/2,
where Phi = (1 + √5) / 2.
*/
#include <bits/stdc++.h>
using namespace std;

double digits(int n) {
	if (n == 0 || n == 1)
		return 1;
	double phi = (1 + sqrt(5)) / 2;
	return floor(n*log10(phi) - 0.5 * log10(5)) + 1;
}

int main()
{
	int num;
	cin >> num;
	cout << digits(num) << endl;
	return 0;
}
