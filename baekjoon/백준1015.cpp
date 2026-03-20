#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<pair<int, int>>a(n);
	vector<int> p(n);

	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		a[i] = { j,i };
	}
	
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		p[a[i].second] = i;
	}
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	return 0;
}