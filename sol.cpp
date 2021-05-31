#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		// view the image in this repository for better understanding
		// multiply 'n' by 2
		n *= 2;
		vector<vector<int>> a(n, vector<int>(2));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> a[i][j];
			}
		}
		// check if the 'm' x 'm' square is a power of 4 (or divisible by 4)
		if ((m * m) % 4 == 0) {
			// if yes, then check if a valid type of 2 x 2 block is present
			bool checker = false;
			for (int i = 0; i < n - 1; i += 2) {
				if (a[i][1] == a[i + 1][0]) {
					// a 2 x 2 block can only be considered valid iff the 2nd cell
					// of the 1st row is equal to the 1st cell on the 2nd row
					checker = true;
					break;
				}
			}
			cout << (checker ? "YES" : "NO");
		} else {
			// otherwise, the answer is "NO" because it is impossible to fit 2 x 2
			// blocks in a matrix that is not a power of 4 (we cannot cover all cells)
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
