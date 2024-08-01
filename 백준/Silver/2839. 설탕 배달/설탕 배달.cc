#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
    cin >> n;
	while (1) {
		if (n % 5 == 0) {
			cnt = cnt + n / 5;
			break;
	}
		n -= 3;
		cnt++;
		if (n <= 0)
			break;
	
	}
	if (n < 0)
        cout << "-1";
	else
        cout << cnt;	
}
