#include <iostream>
#include <vector>
using namespace std;

int main() {

	int t;
	cin >> t;
	vector<long long> v(t, 1);
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		for (int k = 0; k < b; k++) {
			v[i] = (v[i]*a)%10;
		}    
	}
	for (int i = 0; i < t; i++) {
		if (v[i] % 10 == 1) {
			cout << 1 << "\n";
		}
		else if (v[i] % 10 == 2) {
			cout << 2 << "\n";
		}
		else if (v[i] % 10 == 3) {
			cout << 3 << "\n";
		}
		else if (v[i] % 10 == 4) {
			cout << 4 << "\n";
		}
		else if (v[i] % 10 == 5) {
			cout << 5 << "\n";
		}
		else if (v[i] % 10 == 6) {
			cout << 6 << "\n";
		}
		else if (v[i] % 10 == 7) {
			cout << 7 << "\n";
		}
		else if (v[i] % 10 == 8) {
			cout << 8 << "\n";
		}
		else if (v[i] % 10 == 9) {
			cout << 9 << "\n";
		}
		else if (v[i] % 10 == 0) {
			cout << 10 << "\n";
		}
	}
	return 0;
}