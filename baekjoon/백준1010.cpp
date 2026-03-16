#include <iostream>
using namespace std;

long long dy[31][31];

int main() {
	int t;
	cin >> t;
	for (int i = 0; i <= 30; i++) {
		dy[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			dy[i][j] = dy[i - 1][j - 1] + dy[i - 1][j];
		}
	}
	while (t--) {
		int n,m;
		cin >> n >> m;
		cout << dy[m][n]<<"\n";
	}
}