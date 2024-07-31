#include <iostream>

using namespace std;

// nCr을 계산하는 함수
unsigned long long comb(int n, int r) {
    if (r > n - r) {
        r = n - r; // nCr과 nC(n-r)은 같다.
    }
    unsigned long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << comb(m, n) << endl;
    }
    return 0;
}