#include <iostream>
#include <vector>
using namespace std;

int N;//에너지 구슬의 개수
vector<int> W(10);//에너지 구슬의 무게
int Max = -1;

void getMax(vector<int> curW, int sum) {
	int curS = curW.size();//현재 남은 구슬 수
	//구슬이 3개 남은 경우
	if (curS == 3) {
		sum += curW[0] * curW[2];
		if (Max < sum)Max = sum;
		return;
	}
	for (int i = 1; i < curS - 1; i++) {
		int tmp = curW[i];
		sum += curW[i - 1] * curW[i + 1];
		vector<int>rW = curW;
		rW.erase(rW.begin() + i);
		getMax(rW, sum);
		sum -= curW[i - 1] * curW[i + 1];
	}
}

int main() {
    cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> W[i];
	}
	getMax(W, 0);
	cout << Max << '\n';
	return 0;
}