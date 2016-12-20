/* Given a square matrix of size m, calculate the sum of its diagonals.
   E.g.
   Input:
   3
   1 1 1 1 1 1 1 1 1
   Output:
   6
*/
#include<bits/stdc++.h>
using namespace std;

int diagSum(int n, vector<vector<int>> a) {
    int suml = 0;
    int sumr = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Left diagonal characterised by equal index values.
            if (i == j)
                suml += a[i][j];
            // Right diagonal characterised by sum of indices being
            // smaller than size if indexing starts at 0. Otherwise,
            // sum of indices is greater than size by 1.
            if (n - 1 == i + j)
                sumr += a[i][j];
        }
    }
    return (suml + sumr);
}

int main() {
    int m;
    cin >> m;
    vector<vector<int>> a(m, vector<int> (m));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << diagSum(m, a) << endl;
    return 0;
}
