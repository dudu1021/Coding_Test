#include <iostream>

using namespace std;

int fac(int n){
	if (n > 1)
		return n * fac(n - 1);
	else
		return 1;
}
int main() {
	int n, k;
    cin >> n >> k;
	int a = fac(n);
	int b = fac(n - k);
	int c = fac(k);
    cout << a/b/c;
}