/* Given an array, check whether there are two nos present in it with the given product.
   E.g.
   Input:
   5 24
   2 3 1 4 8
   4 14
   4 5 1 6 2
   Output:
   Yes
   No
*/
#include <bits/stdc++.h>
using namespace std;

bool checkprod(vector<int> a, int size, int p) {
	unordered_set<int> set;
	for (int i = 0; i < size; i++) {
		if (p % a[i] == 0) { 
			int factor = p / a[i];
			if (set.find(factor) != set.end())
				return true;
			else
				set.insert(a[i]);
		}
	}
	for (auto it = set.begin(); it != set.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	return false;
}

int main()
{
	int n, prod;
	cin >> n >> prod;
	vector<int> array;
	int val;
	for (int i = 0; i < n; i++) {
		cin >> val;
		array.push_back(val);
	}
	if(checkprod(array, n, prod))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
