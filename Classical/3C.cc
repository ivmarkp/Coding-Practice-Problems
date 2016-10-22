/* Count the number of digits in the Factorial of a given number.
   Input:
   0
   5
   Output:
   1 i.e. 0! = 1 (1 digit)
   3 i.e 5! = 120 (3 digits)

Hints:
A naive solution would be to calculate the n! first and then calculate the number of digits present in it. However as the value for n! can be very large, it would become cumbersome to store them in a variable. A better solution would be to use the useful property of logarithms to calculate the required answer. 

Note that the floor value of log base 10 increased by 1, "of any number", gives the number of digits present in that number! And also, log(5!) = log(5*4*3*2*1) = log(5) + log(4) + log(3) + log(2) + log(1)
*/
#include <bits/stdc++.h>
using namespace std;

int count_digits(int n) {
	if (n < 0)
		return 0;
	double log_val = 0.0;
	for (int i = n; i >= 1; i--)
		log_val += log10(i);
	return floor(log_val) + 1;
}

int main()
{
	int num;
	cin >> num;
	cout << count_digits(num) << endl;
	return 0;
}
