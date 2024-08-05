#include <iostream>

using namespace std;

int main(void) {
    int m, n, arr[1000001] = { 0 };
    arr[1] = 1;
    cin >> m >> n;
    
    for (int i = 2; i <= n; i++) {
        for (int j = 2; i*j <= n; j++)
            arr[i * j] = 1;
    }
    for (int i = m; i <= n; i++) {
        if (arr[i] == 0)
            cout << i << endl;
    }
    return 0;
}