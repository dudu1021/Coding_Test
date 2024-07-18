#include <iostream>
using namespace std;

const int MAX = 1024;
int table[MAX + 1][MAX + 1];
int prefixSum[MAX + 1][MAX + 1] = { 0 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    // 입력 받기
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> table[i][j];
        }
    }

    // 2차원 배열 prefixSum을 이용하여 누적합 계산하기
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefixSum[i][j] = prefixSum[i][j - 1] + prefixSum[i - 1][j] - prefixSum[i - 1][j - 1] + table[i][j];
        }
    }

    // 직사각형 부분의 합을 계산하고 출력하기
    while (m--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << prefixSum[c][d] - prefixSum[a - 1][d] - prefixSum[c][b - 1] + prefixSum[a - 1][b - 1] << '\n';
    }

    return 0;
}
