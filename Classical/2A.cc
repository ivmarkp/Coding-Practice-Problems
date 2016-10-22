/* Given two numbers, find LCM & GCD.
   Input:
   4 12
   270 192
   Output:
   12 4
   8640 6

Hints:
For two numbers, lcm(a,b) = a * b / gcd(a,b) and gcd of two nos can be calculated using Euclid's algo: 
1. If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
2. If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
3. Write A in quotient remainder form (A = B*Q + R)
4. Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	int remainder = a % b;
	return gcd(b, remainder);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a / gcd(a,b) * b << ' ' << gcd(a,b) << endl;
	return 0;
}
