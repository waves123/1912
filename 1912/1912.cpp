#include <iostream>
#include <algorithm>
using namespace std;

int a[100000], d[100000];

int main() {
	int n, ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	d[0] = a[0];
	for (int i = 0; i < n; i++) {
		d[i] = max(a[i], d[i - 1] + a[i]);
	}
	ans = d[0];
	for (int i = 0; i < n; i++) {
		ans = max(ans, d[i]);
	}
	cout << ans << endl;
}