#include <iostream>

using namespace std;

int main(void) {
    int n, cnt = 0;
    int arr[246913] = { 0 };

    while (1) {
        cin >> n;

        if (n == 0)
            break;
        arr[0] = 1, arr[1] = 1;
        for (int i = 2; i <= 2 * n; i++) {
            if (arr[i] == 1)
                continue;
            else {
                for (int j = 2; i * j <= 2 * n; j++)
                    arr[i * j] = 1;
            }
        }

        for (int i = n + 1; i <= 2 * n; i++) {
            if (arr[i] == 0)
                cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
    }