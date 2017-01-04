#include <bits/stdc++.h>
using namespace std;

char p[] = "";

void binary(int n) {
	if (n < 1)
		cout << p << endl;
	else {
		p[n-1] = '0';
		binary(n-1);
		p[n-1] = '1';
		binary(n-1);
	}
}

int main() {
	int n;
	cin >> n;
	binary(n);
	return 0;
}
