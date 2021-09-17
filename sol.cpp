#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			s.insert(a);
		}
		// create a set containing numbers from 1 to 'n' (inclusive)
		set<int> original;
		for (int i = 0; i < n; i++) {
			original.insert(i + 1);
		}
		int cnt = 0;
		// count the number of elements that are within the range of 1 to 'n' (inclusive)
		for (auto& e : s) {
			if (original.find(e) != original.end()) {
				cnt++;
			}
		}
		// calculate the difference of 'cnt' and 'n' (number of elements that need to be replaced)
		cout << n - cnt << '\n';
	}
	return 0;
}
