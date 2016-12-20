/* Calculate the angle between hour hand and minute hand. There can be two angles between
   hands, we need to print minimum of two. Also, we need to print floor of final result
   angle.
   E.g.
   Input:
   2
   9 60
   11 48.5244
   Output
   90
   63
*/
#include <bits/stdc++.h>
using namespace std;

void calc(double h, double m) {
    if (h == 12) h = 0;
    if (m == 60) m = 0;
    // Hour hand gains 30 degrees with each hour and 0.5 degrees with each minute.
    double hh = h * 30.0 + (m * 0.5);
    // Minute hand gains 6 degrees with each minute.
    double mh = m * 6.0;
    // Final angle is the minimum of two angles between hh and mh.
    double angle = abs(mh - hh);
    double angle = min(360.0 - angle, angle);
    cout << floor(angle) << endl;
}

int main() {
	//code
	int t;
	double h, m;
	cin >> t;
	while(t--) {
	    cin >> h >> m;
	    calc(h, m);
	}
	return 0;
}
