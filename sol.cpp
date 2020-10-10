#include <bits/stdc++.h>

using namespace std;

long long __gcd(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	return __gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long a, b, x, y;
		cin >> a >> b >> x >> y;
		if (__gcd(a, b) == __gcd(x, y)) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
