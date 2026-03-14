#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n, count = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int cx, cy, r;
			cin >> cx >> cy >> r;
			int d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
			int d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
			int r1 = r * r;

			bool in1 = d1 < r1;
			bool in2 = d2 < r1;

			if (in1 != in2) {
				count++;
			}
		}
		cout << count << "\n";
	}

	return 0;
}
