#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> p(n);

	for (int i = 0; i < n; i++)
		p[i] = i + 1;

	do {
		for (int i = 0; i < m; i++)
			cout << p[i] << " ";
		cout << '\n';
		reverse(p.begin() + m, p.end());
	} while (next_permutation(p.begin(), p.end()));
	return 0;
}