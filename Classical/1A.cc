/* Given a number n, print n Fibonacci no's starting from 0.
   Fibonacci Sequence: 0 1 1 2 3 5 8 13 21...
   E.g.
   Input:
   5
   Output:
   0 1 1 2 3

Note: Recursive solution (exponential time complexity) takes way more time than iterative
      solution. Try for 40 or 45.
*/
#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n-1) + fibo(n-2);
}

int main()
{
	int num;
	cin >> num;
	clock_t t = clock();
	for (int i = 0; i <= num; i++)
		cout << fibo(i) << ' ';
	cout << endl;
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	cout << "Time taken: " << time_taken << endl;
	return 0;
}
