#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {

	int a, b;
	cin >> a >> b;
	cout << fixed << setprecision(12) << (double)a / (double)b;
	return 0;
}