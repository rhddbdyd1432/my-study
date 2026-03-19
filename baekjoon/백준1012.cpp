#include <iostream>
#include <string.h>
using namespace std;

int zone[50][50], m, n;

int dfs(int x, int y) {
	zone[x][y] = 0;
	if (x + 1 < m && zone[x + 1][y] == 1) dfs(x + 1, y);
	if (x - 1 >= 0 && zone[x - 1][y] == 1) dfs(x - 1, y);
	if (y + 1 < n && zone[x][y + 1] == 1) dfs(x, y + 1);
	if (y - 1 >= 0 && zone[x][y - 1] == 1) dfs(x, y - 1);
	
	return 0;
}


int main() {

	int t;
	cin >> t;
	while (t--) {
		int x, y, k;
		cin >> m >> n >> k;
		memset(zone, 0, sizeof(zone));
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			zone[x][y] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (zone[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt<<"\n";
		
	}

	return 0;
}