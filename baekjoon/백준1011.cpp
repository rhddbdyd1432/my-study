#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		long long x, y;
		cin >> x >> y;
		long long d = y - x;
		long long n = (long long)sqrt(d);
		if (d == n * n) {
			cout << 2 * n - 1 << "\n";
		}
		else if (d <= n * n + n)
			cout << 2 * n << "\n";
		else {
			cout << 2 * n + 1 << "\n";
		}
	}
	return 0;
}
