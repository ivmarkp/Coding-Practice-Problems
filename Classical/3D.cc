/* Given an integer n, count the no. of trailing zeroes in its Factorial.
   Input:
   5
   10
   Output:
   1
   2

Hints:
A simple method is to first calculate factorial of n, then count trailing 0s in the result (We can count trailing 0s by repeatedly dividing the factorial by 10 till the remainder is 0). The above method can cause overflow for a slightly bigger numbers as factorial of a number is a big number (See factorial of 20 given in above examples)

Since trailing zeroes are the result of the product of 5 * 2 therefore, in any number, the no. of trailing zeroes is equal to number of 5s in its prime factorization as observed in this example: 10! = 3628800 = 2^8 * 3^4 * 5^2 * 7. To do that, count each number in factoral split up (5*4*3*2*1) that is perfectly divided by 5. That'll be equal to number of 5's in the prime factorization and hence the answer.
*/
#include <bits/stdc++.h>
using namespace std;

int zeroes(int n) {
	if (n < 0)
		return 0;

	int count = 0;
	// Check how many times each number in factorial split up is divided by 5.
	while(n) {
		int temp = n;		
		while(temp % 5 == 0) {
			count++;
			temp /= 5;
		}
		n--;
	}

	return count;
}

int main()
{
	int num;
	cin >> num;
	cout << zeroes(num) << endl;
	return 0;
}
