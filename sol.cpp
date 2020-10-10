#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		ll a, b, x, y;
		cin >> a >> b >> x >> y;
		if(gcd(a, b)==gcd(x, y))
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
}
