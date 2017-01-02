/** Construct a 6 input gate which performs the following logical operation:
 *	(not(A)).B + C.D +E.(not(F))
 *	E.g.
 *	Input:
 *	1 1 0 0 1 1
 *	1 1 1 1 1 1
 *	Output:
 *	0
 *	1
 */
#include<bits/stdc++.h>
using namespace std;

int logic(int a, int b, int c, int d, int e, int f) {
    a = ~a;
    f = ~f;
    int x = a & b;
    int y = c & d;
    int z = e & f;
    return x | y | z;
}

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << logic(a, b, c, d, e, f) << endl;
	return 0;
}
