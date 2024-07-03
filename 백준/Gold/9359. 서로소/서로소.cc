#include<stdio.h>
#include<vector>
using namespace std;

bool not_prime[40003];
vector<long long> P;
vector<long long> v;
int main() {
	for (int i = 2; i <= 40000; i++) {
		if (not_prime[i]) continue;
		for (int j = i + i; j <= 40000; j += i) {
			not_prime[j] = true;
		}
	}
	for (int i = 2; i <= 40000; i++) {
		if (!not_prime[i]) P.push_back(i);
	}

	int t;
	scanf("%d", &t);
	int tc = 1;
	vector<long long> div;
	while (t--) {
		long long a, b;
		int n;
		scanf("%lld %lld %d", &a, &b, &n);
		v.clear();
		div.clear();

		int tmp = n;
		for (int i = 0; i < P.size(); i++) {
			if (tmp%P[i] == 0) {
				while (tmp%P[i] == 0) {
					tmp /= P[i];
				}
				v.push_back(P[i]);
			}
		}
		if (tmp != 1) v.push_back(tmp);

		int vsize = v.size();
		for (int i = 0; i < vsize; i++) {
			div.push_back(v[i]);
		}

		vsize = div.size();

		long long ans = b - a + 1;
		long long all = 1 << vsize;

		for (int bit = 1; bit < all; bit++) {
			long long num = 1, f = -1;
			for (int j = 0; j < vsize; j++) {
				if ((1 << j)&bit) {
					num *= div[j];
					f *= -1;
				}
			}
			long long acnt = (a - 1) / num*num + 1;
			long long bcnt = b / num*num;
			if (acnt>bcnt) continue;
			ans -= ((bcnt - acnt) / num + 1)*f;
		}
		printf("Case #%d: %lld\n", tc, ans);
		tc++;
	}
	return 0;
}