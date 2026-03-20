#include <iostream>
#include <string.h>
using namespace std;

bool square_not[1000001];

int main() {

	long long min, max;
	cin >> min >> max;
	memset(square_not, true, sizeof(square_not));
	for (int i = 2; i * i <= max; i++) {
		long long square = i * i;
		long long start = min / square;
		if (min % square != 0) start++;
		for (long long  j = start; square*j <= max; j++) {
			square_not[square * j - min] = false;
		}
	}
	int cnt = 0;
	for (long long i = 0; i <= max - min; i++) {
		if (square_not[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

