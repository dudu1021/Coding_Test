#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k, sum=0;
	int n;
	stack <int> stack;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n != 0)
			stack.push(n);
		else
			stack.pop();
	}
	int size = stack.size();
	for (int i = 0; i < size; i++) {
		sum += stack.top();
		stack.pop();
	}
	cout << sum;

	return 0;
}