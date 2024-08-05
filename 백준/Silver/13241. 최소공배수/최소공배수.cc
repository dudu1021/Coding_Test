#include <iostream>

using namespace std;

int main() {
	long long int a, b, c;
	int gcd;
    cin >> a >> b;

	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) 
			gcd = i;
	}
    c = a * b / gcd;
    cout << c;
}