#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int fac(int n){
	if (n > 1)
		return n * fac(n - 1);
	else
		return 1;
}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int a = fac(n);
	int b = fac(n - k);
	int c = fac(k);
	printf("%d", a / b / c);
}