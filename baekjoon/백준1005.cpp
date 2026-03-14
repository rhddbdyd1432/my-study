#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
	
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> d(n + 1);
		vector<int> indegree(n + 1,0);
		vector<int> adj[1001];
		vector<int> resulttime(n + 1,0);

		for (int i = 1; i <= n; i++) {
			cin >> d[i];
		}
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			indegree[y]++;
		}
		int w;
		cin >> w;
		queue<int> q;
		for (int i = 1; i < n; i++) {
			if (indegree[i] == 0) {
				q.push(i);
				resulttime[i] = d[i];
			}
		}
		while (!q.empty()) {
			int curr = q.front(); 
			q.pop();
			if (curr == w)break;

			for (int next : adj[curr]) {
				resulttime[next] = max(resulttime[next],resulttime[curr]+d[next]);
				indegree[next]--;
				if (indegree[next] == 0) {
					q.push(next);
				}
			}
		}
		cout << resulttime[w];
	}
	return 0;
}