#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<pair<long long, long long>> p(n);
		long long total_x = 0, total_y = 0;
		for (int i = 0; i < n; i++) {
			cin >> p[i].first >> p[i].second;
			total_x += p[i].first;
			total_y += p[i].second;
		}
		vector<int> pick(n, 1);
		for (int i = 0; i < n / 2; i++) {
			pick[i] = 0;
		}
		double min_dist = 1e18;
		do {
			long long sub_x = 0, sub_y = 0;
			for (int i = 0; i < n; i++) {
				if (pick[i] == 0) {
					sub_x += p[i].first;
					sub_y += p[i].second;
				}
			}
			long long res_x = total_x - 2 * sub_x;
			long long res_y = total_y - 2 * sub_y;
			min_dist = min(min_dist, sqrt((double)res_x * res_x + (double)res_y * res_y));
		} while (next_permutation(pick.begin(), pick.end()));
		cout << fixed << setprecision(12) << min_dist << "\n";
	}


	return 0;
}