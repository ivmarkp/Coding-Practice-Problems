/* Tower of Hanoi: A mathematical puzzle which consists of three towers (pegs) and more
   than one rings. The goal is to move all the disks to some another tower without
   violating the sequence of arrangement. A few rules to be followed for Tower of Hanoi are −
   1. Only one disk can be moved among the towers at any given time.
   2. Only the "top" disk can be removed.
   3. No large disk can sit over a small disk.
   
   Tower of Hanoi puzzle with n disks can be solved in minimum 2^n−1 steps. So, given n nos
   of disks print the required steps to move the disks from source tower to destination
   tower.
   
   E.g.
   3 (2^3 - 1 i.e. 7 moves required)
   Move disk 1 from S to D
   Move disk 2 from S to A
   Move disk 1 from D to A
   Move disk 3 from S to D
   Move disk 1 from A to S
   Move disk 2 from A to D
   Move disk 1 from S to D
*/
#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char src, char dest, char aux) {
	if (n == 1) {
		cout << "Move disk 1 from " << src << " to " << dest << endl;
		return;
	}
	
	// Move top n-1 disks from src tower to aux tower using dest as aux.
	hanoi(n-1, src, aux, dest);
	
	// Move remaining disk from src to dest.
	cout << "Move disk " << n << " from " << src << " to " << dest << endl;
	
	// Move top n-1 disks from aux tower to dest tower using src as aux.
	hanoi(n-1, aux, dest, src);
}

int main()
{
	int n;
	cin >> n;
	hanoi(n, 'S', 'D', 'A');
	return 0;
}
